/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/
//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wsign-compare"
#endif

#ifdef WIN32
#pragma warning( disable : 4018 )
#endif

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#ifndef OSG_EMBEDDED

#include "OSGLog.h"
#include "OSGImage.h"
#include "OSGBaseFunctions.h"

#include "OSGImageFunctions.h"


OSG_BEGIN_NAMESPACE

#if defined(OSG_WIN32_ICL) && !defined(OSG_CHECK_FIELDSETARG)
#pragma warning(disable : 383)
#endif
#ifdef __sgi
#pragma set woff 1209
#endif

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

//---------------------------------------------------------------------------//
/*! composes multiple images to one */


//---------------------------------------------------------------------------//
/*! convert bumpmap to normalmap */

bool createNormalMapFromBump ( Image  *image,
                               Image  *dstImg,
                               Vec3f   normalMapScale)
{
    if (image == NULL || image->getDepth() > 1 ||
        image->getPixelFormat() != Image::OSG_L_PF)
    {
        FFATAL(("No valid Normalmap given!\n"));
        return false;
    }

    bool cpImg = false;

    ImageUnrecPtr dst;

    if(dstImg == NULL)
    {
        dst = Image::create();
        cpImg = true;
    }
    else
    {
        dst = dstImg;
    }
    
    Int32 w = image->getWidth();
    Int32 h = image->getHeight();
    
    const unsigned char *srcData = image->getData();

    dst->set(Image::OSG_RGB_PF, w, h);

    unsigned char *dstData = dst->editData();

    Vec3f scale(normalMapScale);
    
    if (scale[0] == 0.0f || scale[1] == 0.0f || scale[2] == 0.0f)
    {
        Real32 a = Real32(w) / Real32(h);
        
        if(a < 1.0f)
        {
            scale[0] = 1.0f;
            scale[1] = 1.0f / a;
        }
        else
        {
            scale[0] = a;
            scale[1] = 1.0f;
        }
        scale[2] = 1.0f;
    }

    Int32 i, j;

    for (i=1; i<w-1; i++)
    {
        for (j=1; j<h-1; j++)
        {
            Vec3f dfdi(2.0f, 0.0f, Real32(srcData[(i+1) +     j*w] - srcData[(i-1) +     j*w]) / 255.0f);
            Vec3f dfdj(0.0f, 2.0f, Real32(srcData[    i + (j+1)*w] - srcData[    i + (j-1)*w]) / 255.0f);
            Vec3f n = dfdi.cross(dfdj);
            
            n[0] *= scale[0];
            n[1] *= scale[1];
            n[2] *= scale[2];
            n.normalize();

            dstData[(j*w+i)*3+0] = UInt8((n[0]+1)*127.5);
            dstData[(j*w+i)*3+1] = UInt8((n[1]+1)*127.5);
            dstData[(j*w+i)*3+2] = UInt8((n[2]+1)*127.5);
        }
    }

    // handle image border
    for (i=0; i<w; i++)
    {
        dstData[i*3+0] = dstData[(w+i)*3+0];
        dstData[i*3+1] = dstData[(w+i)*3+1];
        dstData[i*3+2] = dstData[(w+i)*3+2];
        
        dstData[((h-1)*w+i)*3+0] = dstData[((h-2)*w+1)*3+0];
        dstData[((h-1)*w+i)*3+1] = dstData[((h-2)*w+1)*3+1];
        dstData[((h-1)*w+i)*3+2] = dstData[((h-2)*w+1)*3+2];
    }
    
    for (j=0; j<h; j++)
    {
        dstData[(j*w)*3+0] = dstData[(j*w+1)*3+0];
        dstData[(j*w)*3+1] = dstData[(j*w+1)*3+1];
        dstData[(j*w)*3+2] = dstData[(j*w+1)*3+2];
        
        dstData[(j*w+(w-1))*3+0] = dstData[(j*w+(w-2))*3+0];
        dstData[(j*w+(w-1))*3+1] = dstData[(j*w+(w-2))*3+1];
        dstData[(j*w+(w-1))*3+2] = dstData[(j*w+(w-2))*3+2];
    }

    if (cpImg)
    {
        image->set(dst);
    }

    //dst->dump();
    
    return true;
}


//---------------------------------------------------------------------------//
/*!  creates a Normal Volume from the given data */

bool createNormalVolume (      Image       *inImage,
                               Image       *outImage,
                         const std::string &outputFormat)
{
  const Real32 gMax = 441.67295593f, gF = 255.0f/gMax;
  const OSG::Real32 TwoPi = 2 * OSG::Pi;

  enum DataIndex { SCALAR_DI,
                   SCALAR_NULLEDGE_DI,
                   X_DI, Y_DI, Z_DI,
                   GRADIENT_DI,
                   THETA_DI, PHI_DI,
                   
                   END_DI
  };
  
  const UInt8 *data = 0;
  UInt8 *ds;
  OSG::Real32 minU = OSG::Inf, maxU = -OSG::Inf;
  OSG::Real32 minV = OSG::Inf, maxV = -OSG::Inf;
  Int32 w, h, d, x, y, z, md, ld, hd, xs, ys, zs, ps, ls, ss, os;
  Int32 i,voxelSize;
  std::vector<UInt32> dataIndex;
  Real32 u, v, length;
  Vec3f normal;
  ImageUnrecPtr copy;
  Image::PixelFormat pf;
  bool calcGradient = false, calcThetaPhi = false;
  char validFormat[END_DI];
  UInt8 voxelData[sizeof(validFormat)];
  char *formatP;
  bool isEdge;

  // init valid format string
  validFormat[SCALAR_DI]           = 's';
  validFormat[SCALAR_NULLEDGE_DI]  = 'S';
  validFormat[X_DI]                = 'x';
  validFormat[Y_DI]                = 'y';
  validFormat[Z_DI]                = 'z';
  validFormat[GRADIENT_DI]         = 'g';
  validFormat[THETA_DI]            = 't';
  validFormat[PHI_DI]              = 'p';
     
  if(inImage == NULL || outImage == NULL)
  {
      return false;
  }

  // check if we have a valid input image
  if ( inImage->getBpp() != 1 ) {

    copy = Image::create();
    FLOG (("Create copy to reformat/convert Image\n"));

    if ( (inImage->getPixelFormat() == Image::OSG_L_PF) ||
         (inImage->getPixelFormat() == Image::OSG_L_PF) )
      copy->set(inImage);    
    else 
      inImage->reformat(Image::OSG_L_PF,copy);      
    inImage = copy;
    
    if (inImage->getDataType() != Image::OSG_UINT8_IMAGEDATA) 
      inImage->convertDataTypeTo(Image::OSG_UINT8_IMAGEDATA);
  }

  switch (outputFormat.size()) {
  case 1:
    pf = Image::OSG_L_PF;
    break;
  case 2:
    pf = Image::OSG_LA_PF;
    break;
  case 3:
    pf = Image::OSG_RGB_PF;
    break;
  case 4:
    pf = Image::OSG_RGBA_PF;
    break;
  default:
    FFATAL(( "Invalid outputFormat length in createNormalVolume: %"PRISize"\n",
             outputFormat.size() ));
    return false;
  }
    
  // get image data and parameter
  w    = inImage->getWidth();
  h    = inImage->getHeight();
  d    = inImage->getDepth();
  data = inImage->getData();
  ps   = inImage->getBpp();
  ls   = ps * w;
  ss   = ls * h;
  os   = 0;

  // check format string and fill dataIndex
  voxelSize = outputFormat.size();
  dataIndex.resize(voxelSize);
  for (i = 0; i < voxelSize; i++) {
    if ((formatP = strchr(validFormat, outputFormat[i]))) {
      dataIndex[i] = (formatP - validFormat);
      switch (dataIndex[i]) {
      case GRADIENT_DI:
        calcGradient = true;
        break;
      case THETA_DI:
      case PHI_DI:
        calcThetaPhi = true;
        break;
      }
      FDEBUG (( "dataIndex[%d]: %d\n", i, dataIndex[i] ));
    }        
    else {
      FFATAL (( "Invalid outputFormat element %c, valid: %s\n",
                char(outputFormat[i]), validFormat ));
      return false;
    }
  }
                      
  // create output image
  outImage->set( pf, w, h, d );
                      
  ds = outImage->editData();

  // fill output image
  for (z = 0; z < d; z++) {
    for (y = 0; y < h; y++) {
      for (x = 0; x < w; x++) {
        isEdge = false;

        md = data[(x*ps) + (y*ls) + (z*ss) + os];

        // calc xs
        if (x > 0) 
          ld = data[((x-1)*ps) + (y*ls) + (z*ss) + os];
        else {
          isEdge |= true;
          ld = 0;
        }          
        if (x < (w-1))
          hd = data[((x+1)*ps) + (y*ls) + (z*ss) + os];
        else {
          isEdge |= true;
          hd = 0;
        }
        xs = (ld - hd);

        // calc ys
        if (y > 0)
          ld = data[(x*ps) + ((y-1)*ls) + (z*ss) + os];
        else {
          isEdge |= true;
          ld = 0;
        }
        if (y < (h-1)) 
          hd = data[(x*ps) + ((y+1)*ls) + (z*ss) + os];
        else {
          isEdge |= true;
          hd = 0;
        }
        ys = (ld - hd);

        // cals zs
        if (z > 0)
          ld = data[(x*ps) + (y*ls) + ((z-1)*ss) + os];
        else {
          isEdge |= true;
          ld = 0;
        }
        if (z < (d-1))
          hd = data[(x*ps) + (y*ls) + ((z+1)*ss) + os];
        else {
          isEdge |= true;
          hd = 0;
        }
        zs = (ld - hd);
        
        // set the voxel data
        voxelData[SCALAR_DI]          = md;
        voxelData[SCALAR_NULLEDGE_DI] = isEdge ? 0 : md;
        voxelData[X_DI]               = xs / 2 + 127;
        voxelData[Y_DI]               = ys / 2 + 127;
        voxelData[Z_DI]               = zs / 2 + 127;

        // calc normal
        if (calcGradient || calcThetaPhi) {
          normal.setValues (xs,ys,zs);
          length = normal.length();
          normal.normalize();
        }

        // calc gradient
        if (calcGradient) {
          voxelData[GRADIENT_DI] = osgMax ( int (length * gF), 255 );
        }
        
        // calc ThetaPhi
        if (calcThetaPhi) {
          v = OSG::osgACos(normal[2]) / OSG::Pi;
          u = OSG::osgSqrt(normal[0]*normal[0] + normal[1]*normal[1]);
          
          if (u) u = normal[0] / u;
          u = OSG::osgACos(u);
          if (normal[1]<0) u = TwoPi - u;
          u /= TwoPi;
          
          if (u<minU) minU=u;
          if (u>maxU) maxU=u;
          if (v<minV) minV=v;
          if (v>maxV) maxV=v;

          voxelData[THETA_DI] = UInt8(v * 255.f);	// theta
          voxelData[PHI_DI]   = UInt8(u * 255.f);	// phi
        }

        // copy voxeldata to image data
        for (i = 0; i < voxelSize; i++)
          *ds++ = voxelData[dataIndex[i]];

      }
    }
  }

  return true;
}


//---------------------------------------------------------------------------//
/*! create pre-integrated lookup table 
    code based on the "Truly Volumetric Effects" (Martin Kraus)
    example in the ShaderX book (www.shaderx.com)
*/

bool create2DPreIntegrationLUT ( Image  *dst,
                                 Image  *src,
                                 Real32  thickness)
{
    if (src == NULL || dst == NULL ||
        src->getHeight() > 1 || src->getDepth() > 1 ||
        src->getPixelFormat() != Image::OSG_RGBA_PF)
    {
        FFATAL(("No appropriate image given!\n"));
        return false;
    }

    const unsigned char *dataSrc = src->getData();
    UInt32 width = src->getWidth();

        dst->set(Image::OSG_RGBA_PF, width, width);

        unsigned char *dataDst = dst->editData();

        for (Int32 x = 0; x < Int32(width); x++)
        {
            for (Int32 y = 0; y < Int32(width); y++)
            {
                Int32 n = 10 + 2 * abs(x-y);
                Real64 step = thickness / n;
                
                Real64 dr = 0.0,
                       dg = 0.0,
                       db = 0.0,
                       dtau = 0.0;
                
                for (Int32 i = 0; i < n; i++)
                { 
                    Real64 w = x + (y-x) * Real64(i)/n;
                    
                    if (Int32(w + 1) >= Int32(width))
                        w = Real64(width - 1) - 0.5/n;

                    Int32 pos = (Int32(w)) * 4;
                        
                    Real64 e = exp(-dtau), scale = step * (1.0 / 255.0),
                           f = w - floor(w), invF = 1 - f;
                        
                    Real64 tau =   scale * (dataSrc[pos + 3] * f + dataSrc[pos+4 + 3] * invF);
                    Real64 r = e * scale * (dataSrc[pos + 0] * f + dataSrc[pos+4 + 0] * invF);
                    Real64 g = e * scale * (dataSrc[pos + 1] * f + dataSrc[pos+4 + 1] * invF);
                    Real64 b = e * scale * (dataSrc[pos + 2] * f + dataSrc[pos+4 + 2] * invF);

                    dr += r; 
                    dg += g; 
                    db += b; 
                    dtau += tau;
                }
                
                dataDst[(x*width+y)*4+0] = UInt8((dr > 1.0 ? 1.0 : dr)*255);
                dataDst[(x*width+y)*4+1] = UInt8((dg > 1.0 ? 1.0 : dg)*255);
                dataDst[(x*width+y)*4+2] = UInt8((db > 1.0 ? 1.0 : db)*255);
                dataDst[(x*width+y)*4+3] = UInt8((1.0 - exp(-dtau))*255);
            }
        }

    //dst->dump();
    
    return true;
}


//---------------------------------------------------------------------------//
/*! split RGBA images into RGB and A */

bool splitRGBA(Image *rgba,
               Image *rgb,
               Image *alpha)
{
    if (rgba == NULL || rgba->getDepth() > 1 ||
        rgba->getPixelFormat() != Image::OSG_RGBA_PF)
    {
        FFATAL(("No appropriate image given!\n"));
        return false;
    }

    if(rgb == NULL || alpha == NULL)
    {
        FFATAL(("No appropriate target given!\n"));
        return false;
    }

    Int32 w = rgba->getWidth();
    Int32 h = rgba->getHeight();

    rgb->set(Image::OSG_RGB_PF, w, h);
    alpha->set(Image::OSG_L_PF, w, h);
    
    unsigned char *data = rgb->editData();
    const unsigned char *dataRgba = rgba->getData();
    unsigned char *dataAlpha = alpha->editData();
    
    for (Int32 i=0; i<(w * h); i++)
    {    
        data[0] = dataRgba[0];
        data[1] = dataRgba[1];
        data[2] = dataRgba[2];
        dataAlpha[0] = dataRgba[3];
        
        data += 3;
        dataRgba += 4;
        dataAlpha++;
    }

    //rgb->dump();
    //alpha->dump();

    return true;
}

//---------------------------------------------------------------------------//
/*! merge RGB and A images into RGBA */

bool mergeRGBA(Image *rgb,
               Image *alpha,
               Image *rgba)
{
    if (rgb == NULL || alpha == NULL ||
        rgb->getDepth() > 1 || alpha->getDepth() > 1 || 
        rgb->getPixelFormat() != Image::OSG_RGB_PF ||
        alpha->getPixelFormat() != Image::OSG_L_PF)
    {
        FFATAL(("No appropriate images given!\n"));
        return false;
    }

    if(rgba == NULL)
    {
        FFATAL(("No appropriate target given!\n"));
        return false;
    }


    Int32 w = rgb->getWidth();
    Int32 h = rgb->getHeight();

    if (w != alpha->getWidth() || h != alpha->getHeight())
    {
        FFATAL(("Colour and Alpha Images must be of same size!\n"));
        return false;
    }

    rgba->set(Image::OSG_RGBA_PF, w, h);
    
    unsigned char *data = rgba->editData();
    const unsigned char *dataRgb = rgb->getData();
    const unsigned char *dataAlpha = alpha->getData();
    
    for (Int32 i=0; i<(w * h); i++)
    {
        data[0] = dataRgb[0];
        data[1] = dataRgb[1];
        data[2] = dataRgb[2];
        data[3] = *dataAlpha;
        data += 4;
        dataRgb += 3;
        dataAlpha++;
    }
 
    //rgba->dump();

    return true;
}

//---------------------------------------------------------------------------//
/*! blend the brush on the canvas image */

bool blendImage ( Image   *canvas, 
                  Image   *brush,
                  Vec3f    position,
                  Color4f  color, 
                  Real32   alphaScale,
                  Real32   paintZ )
{
  int x,y,z;
  int red = 0, green = 0, blue = 0, grey = 0;
  int alpha = 0;
  const UChar8 *s = 0;
  UInt8 *d = 0;
  
  if(canvas == NULL || brush == NULL)
  {
      FFATAL(("No appropriate images given!\n"));
      return false;
  }

  const OSG::UChar8 *src  = brush->getData();
        OSG::UChar8 *dest = canvas->editData();
  
  const float cred   = color.red();
  const float cgreen = color.green();
  const float cblue  = color.blue();
  const float calpha = color.alpha();
  const float talpha = alphaScale;

  const int cPF = canvas->getPixelFormat();
  const int bPF = brush->getPixelFormat();

  const int cBpp = canvas->getBpp();
  const int bBpp = brush->getBpp();

  const int bW = brush->getWidth();
  const int bH = brush->getHeight();
  const int bD = brush->getDepth();

  const int cW = canvas->getWidth();
  const int cH = canvas->getHeight();
  const int cD = canvas->getDepth();
  
  const int xcOff = int(position.x());
  const int ycOff = int(position.y());
  const int zcOff = int(position.z());

  // canvas->setSubData (xcOff,ycOff,zcOff,bW,bH,bD,src);

  const int xcMin = OSG::osgMax(0, xcOff);
  const int ycMin = OSG::osgMax(0, ycOff);
  const int zcMin = OSG::osgMax(0, zcOff);
  
  const int xcMax = OSG::osgMin(cW, xcOff + bW);
  const int ycMax = OSG::osgMin(cH, ycOff + bH);
  const int zcMax = OSG::osgMin(cD, zcOff + bD);

  const int width  = (xcMax - xcMin);
  const int height = (ycMax - ycMin);
  const int depth  = (zcMax - zcMin);
  
  int xbMin = xcOff < 0 ? -xcOff : 0;
  int ybMin = ycOff < 0 ? -ycOff : 0;
  int zbMin = zcOff < 0 ? -zcOff : 0;

  //select slice for volume brush
  if ((bD > 1) && (depth == 1)) {
    z = int(OSG::osgAbs(paintZ) * (bD - 1)) % bD;
    src += bW * bH * bBpp * z;    
    zbMin = 0;
  }

  for (z = 0; z < depth; z++) {
    for (y = 0; y < height; y++){
      d = dest + ( ((z+zcMin) * cH + (y+ycMin)) * cW + xcMin) * cBpp;
      s = src  + ( ((z+zbMin) * bH + (y+ybMin)) * bW + xbMin) * bBpp;
      for (x = 0; x < width; x++) {
          switch ( bPF ) {
              case OSG::Image::OSG_A_PF:
              case OSG::Image::OSG_I_PF:
                  grey  = *s++;
                  red   = int(cred   * grey);
                  green = int(cgreen * grey);
                  blue  = int(cblue  * grey);
                  alpha = int(calpha * grey);
                  break;
              case OSG::Image::OSG_L_PF:
                  grey  = *s++;
                  red   = int(cred   * grey);
                  green = int(cgreen * grey);
                  blue  = int(cblue  * grey);
                  alpha = int(calpha * 255);
                  break;
              case OSG::Image::OSG_LA_PF:
                  grey  = *s++;
                  red   = int(cred   * grey);
                  green = int(cgreen * grey);
                  blue  = int(cblue  * grey);
                  alpha = int(calpha * *s++);
                  break;
              case OSG::Image::OSG_RGB_PF:
                  red   = int(cred   * *s++);
                  green = int(cgreen * *s++);
                  blue  = int(cblue  * *s++);
                  grey  = green; // FIXME
                  alpha = 255;          
                  break;
              case OSG::Image::OSG_RGBA_PF:
                  red   = int(cred   * *s++);
                  green = int(cgreen * *s++);
                  blue  = int(cblue  * *s++);
                  grey  = green; // FIXME
                  alpha = int(calpha * *s++);
                  break;
              default:
                  FFATAL (("Invalid Brush PixelFormat\n"));
                  brush->dump();
                  return false;
          }
        alpha = int(talpha * alpha);
        switch ( cPF ) {
        case OSG::Image::OSG_I_PF:
          *d  = int(*d * (alpha - 255) + grey  * alpha) / 255;
          ++d;
          break;
        case OSG::Image::OSG_L_PF:
          *d  = int(*d * (alpha - 255) + grey  * alpha) / 255;
          ++d;
          break;
        case OSG::Image::OSG_LA_PF:
          *d  = int(*d * (alpha - 255) + grey  * alpha) / 255;
          ++d;
          ++d;
          break;
        case OSG::Image::OSG_RGB_PF:
          *d  = int(*d * (255 - alpha) + red   * alpha) / 255;
          ++d;
          *d  = int(*d * (255 - alpha) + green * alpha) / 255;
          ++d;
          *d  = int(*d * (255 - alpha) + blue  * alpha) / 255;
          ++d;
          break;
        case OSG::Image::OSG_RGBA_PF:
          *d  = int(*d * (255 - alpha) + red   * alpha) / 255;
          ++d;
          *d  = int(*d * (255 - alpha) + green * alpha) / 255;
          ++d;
          *d  = int(*d * (255 - alpha) + blue  * alpha) / 255;
          ++d;
          ++d;
          break;
        default:
          FFATAL (("Invalid Canvas PixelFormat\n"));
          canvas->dump();
          return false;
        }
      }
    }
  }

  return true;
}

//---------------------------------------------------------------------------//
/*! create phong texture */

bool createPhongTexture(Image   *image,
                        UInt32   size,
                        Real32   specular_exponent,
                        Real32   ka,
                        Real32   kd,
                        Real32   ks)
{
    if(image == NULL)
    {
        FFATAL(("No appropriate target given!\n"));
        return false;
    }
    
    image->set(Image::OSG_L_PF, size, size);
    unsigned char *textureMap = image->editData();
    
    UInt32 i, j, index = 0;
    Real32 x = 0, y = 0;
    
    Real32 specular_factor, diffuse_factor;
    Real32 textureRadius = 0.95f;
    Real32 textureStep = (2.0 * textureRadius) / Real32(size-1);
    
    y = - textureRadius;
    for (j=0; j<size; j++)
    {
        x = -textureRadius;
        for (i=0; i<size; i++)
        {
            diffuse_factor  = sqrt(1.0 - x * x);
            specular_factor = pow( diffuse_factor * sqrt (1.0f - y * y) - x * y,
                                   specular_exponent );               
            textureMap[index++] = UInt8((ka + kd * diffuse_factor + ks * specular_factor) * 255);
            x += textureStep;
        }
        y += textureStep;
    }

    //image->dump();

    return true;
}

//---------------------------------------------------------------------------//
/*! create phong Volume */

bool createPhongVolume ( Image   *image,
                         Color3f  diffuseColor,
                         Color3f  specularColor,
                         UInt32   lutSize,
                         UInt32   lutScalar,
                         Real32   lutIncr )
{
  const OSG::Int32 lutFSize = lutSize / lutScalar;
	OSG::Real32 theta1, theta2, dPhi, incr = lutScalar * lutIncr;
	OSG::Real32 Const = 0.2f, Shi = 40, NdotL;
	OSG::Vec3f color;
  OSG::Vec3f diffuse  (diffuseColor[0],diffuseColor[1],diffuseColor[2]);
  OSG::Vec3f specular (specularColor[0],specularColor[1],specularColor[2]);
	OSG::UInt8 *ds;
	OSG::Real32 min = OSG::Inf, max = -OSG::Inf;
	
    if(image == NULL)
    {
        FFATAL(("No appropriate target given!\n"));
        return false;
    }

	image->set( OSG::Image::OSG_RGB_PF, lutFSize, lutFSize, lutFSize );

  ds = image->editData();

	FDEBUG (("calc phong map START\n"));

	for (dPhi=0; dPhi<360; dPhi+=incr) {
      for (theta1=0; theta1<180; theta1+=incr) {
        for (theta2=0; theta2<180; theta2+=incr) {
			OSG::Real32 t1 = OSG::osgDegree2Rad(theta1),
						t2 = OSG::osgDegree2Rad(theta2),
						dp = OSG::osgDegree2Rad(dPhi);
			NdotL = OSG::osgSin(t1)*OSG::osgSin(t2)*OSG::osgCos(dp) +
					OSG::osgCos(t1)*OSG::osgCos(t2);
			NdotL = (NdotL >= 0) ? NdotL : 0;
			color = diffuse * (NdotL + Const) +
					specular * OSG::osgPow(NdotL, Shi);

			for (int i=0; i<3; i++) {
				if (min>color[i]) min=color[i];
				if (max<color[i]) max=color[i];
				
				color[i] = OSG::osgClamp(0.f, (color[i]), 1.f);
				*ds++ = UInt8(color[i]*255);
			}
		}
	  }
	}


	FDEBUG (( "calc phong map FINISH: clamped from [%f,%f] to [0,1]\n", 
            min, max));

  return true;
}


//---------------------------------------------------------------------------//
/*! create normalization cube map */

bool createNormalizationCubeMap(std::vector<Image *> imageVec,
                                UInt32 size)
{
    int i, j;
    
    if (imageVec.size() < 6)
    {
        FFATAL(("Only %"PRISize" images given - need six\n", imageVec.size()));
        return false;
    }

    for (i=0; i<6; i++)
    {
        if (imageVec[i] == NULL)
        {
            FFATAL(("Image[%d] is Null\n", i));
            return false;
        }
    }
    
    unsigned char *data = NULL;
    Vec3f n;
    
    size = osgNextPower2(size);
    
    float size2 = size / 2.0f;
    float offset = 0.5f;

    Image *imagePosX = imageVec[0];
    
    // pos x  
        imagePosX->set(Image::OSG_RGB_PF, size, size);
        data = imagePosX->editData();
                        
        for (j=0; j<size; j++) {        
            for (i=0; i<size; i++) {
                
                n[0] =  size2;  
                n[1] = -(Real32(j) + offset - size2);
                n[2] = -(Real32(i) + offset - size2);
                n.normalize();
    
                data[0] = UInt8(((n.x() + 1.f) / 2.f) * 255.f);
                data[1] = UInt8(((n.y() + 1.f) / 2.f) * 255.f);
                data[2] = UInt8(((n.z() + 1.f) / 2.f) * 255.f);
                data += 3;
            }
        }

    Image *imageNegX = imageVec[1];
    
    // neg x
        imageNegX->set(Image::OSG_RGB_PF, size, size);
        data = imageNegX->editData();
                        
        for (j=0; j<size; j++) {        
            for (i=0; i<size; i++) {
                    
                n[0] = -size2;
                n[1] = -(Real32(j) + offset - size2);
                n[2] =  (Real32(i) + offset - size2);
                n.normalize();
    
                data[0]= UInt8(((n.x() + 1.f) / 2.f) * 255.f);
                data[1]= UInt8(((n.y() + 1.f) / 2.f) * 255.f);
                data[2]= UInt8(((n.z() + 1.f) / 2.f) * 255.f);
                data += 3;
            }
        }

    Image *imagePosY = imageVec[2];
            
    // pos y
        imagePosY->set(Image::OSG_RGB_PF, size, size);
        data = imagePosY->editData();
                
        for (j=0; j<size; j++) {        
            for (i=0; i<size; i++) {
                
                n[0] =  (Real32(i) + offset - size2);
                n[1] =  size2;
                n[2] =  (Real32(j) + offset - size2);
                n.normalize();
    
                data[0]= UInt8(((n.x() + 1.f) / 2.f) * 255.f);
                data[1]= UInt8(((n.y() + 1.f) / 2.f) * 255.f);
                data[2]= UInt8(((n.z() + 1.f) / 2.f) * 255.f);
                data += 3;
            }
        }

    Image *imageNegY = imageVec[3];
    
    // neg y
        imageNegY->set(Image::OSG_RGB_PF, size, size);
        data = imageNegY->editData();
            
        for (j=0; j<size; j++) {        
            for (i=0; i<size; i++) {
                
                n[0]=  (Real32(i) + offset - size2);
                n[1]= -size2;
                n[2]= -(Real32(j) + offset - size2);
                n.normalize();
    
                data[0] = UInt8(((n.x() + 1.f) / 2.f) * 255.f);
                data[1] = UInt8(((n.y() + 1.f) / 2.f) * 255.f);
                data[2] = UInt8(((n.z() + 1.f) / 2.f) * 255.f);
                data += 3;
            }
        }

    Image *imagePosZ = imageVec[4];
    
    // pos z    
        imagePosZ->set(Image::OSG_RGB_PF, size, size);
        data = imagePosZ->editData();
            
        for (j=0; j<size; j++) {        
            for (i=0; i<size; i++) {
                
                n[0] =  (Real32(i) + offset - size2);
                n[1] = -(Real32(j) + offset - size2);
                n[2] =  size2;
                n.normalize();
    
                data[0] = UInt8(((n.x() + 1.f) / 2.f) * 255.f);
                data[1] = UInt8(((n.y() + 1.f) / 2.f) * 255.f);
                data[2] = UInt8(((n.z() + 1.f) / 2.f) * 255.f);
                data += 3;
            }
        }

    Image *imageNegZ = imageVec[5];
    
    //negz
        imageNegZ->set(Image::OSG_RGB_PF, size, size);
        data = imageNegZ->editData();
        
        for (j=0; j<size; j++) {        
            for (i=0; i<size; i++) {
            
                n[0] = -(Real32(i) + offset - size2);
                n[1] = -(Real32(j) + offset - size2);
                n[2] = -size2;
                n.normalize();
    
                data[0] = UInt8(((n.x() + 1.f) / 2.f) * 255.f);
                data[1] = UInt8(((n.y() + 1.f) / 2.f) * 255.f);
                data[2] = UInt8(((n.z() + 1.f) / 2.f) * 255.f);
                data += 3;
            }
        }

    return true;
}


//---------------------------------------------------------------------------//
/*! Noise code; first some helpers */

/************************************************************************
*                                                                       *
*               Copyright (C) 2002-2004  3Dlabs Inc. Ltd.               *
*                                                                       *
*                        All rights reserved.                           *
*                                                                       *
* Redistribution and use in source and binary forms, with or without    *
* modification, are permitted provided that the following conditions    *
* are met:                                                              *
*                                                                       *
*     Redistributions of source code must retain the above copyright    *
*     notice, this list of conditions and the following disclaimer.     *
*                                                                       *
*     Redistributions in binary form must reproduce the above           *
*     copyright notice, this list of conditions and the following       *
*     disclaimer in the documentation and/or other materials provided   *
*     with the distribution.                                            *
*                                                                       *
*     Neither the name of 3Dlabs Inc. Ltd. nor the names of its         *
*     contributors may be used to endorse or promote products derived   *
*     from this software without specific prior written permission.     *
*                                                                       *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS   *
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT     *
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS     *
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE        *
* COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, *
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,  *
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;      *
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER      *
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT    *
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN     *
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE       *
* POSSIBILITY OF SUCH DAMAGE.                                           *
*                                                                       *
************************************************************************/

namespace
{

// globals
#define MAXB 0x100

Int32  p[MAXB + MAXB + 2];
Real32 g3[MAXB + MAXB + 2][3];
Real32 g2[MAXB + MAXB + 2][2];
Real32 g1[MAXB + MAXB + 2];
Int32  start = 1;
Int32  B = 0x100;
Int32  BM = 0xff;


void setNoiseFrequency(Int32 frequency)
{
    start = 1;
    B = frequency;
    BM = B-1;
}

Real32 lerp(Real32 t, Real32 a, Real32 b)
{
    return (1 - t) * a + t * b;
}

Real32 sCurve(Real32 t)
{
    return t * t * (3.0f - 2.0f * t);
}

Real32 at2(Real32 *q, Real32 rx, Real32 ry)
{
    return rx * q[0] + ry * q[1];
}

Real32 at3(Real32 *q, Real32 rx, Real32 ry, Real32 rz)
{
    return rx * q[0] + ry * q[1] + rz * q[2];
}

void setup(Real32 *vec, UInt8 i,
           Real32 &t,
           Int32 &b0, Int32 &b1,
           Real32 &r0, Real32 &r1)
{
    t  = vec[i] + 0x1000;
    b0 = (Int32(t)) & BM;
    b1 = (b0 + 1) & BM;
    r0 = t - Int32(t);
    r1 = r0 - 1.0f;
}

void normalize2(Real32 v[2])
{
    Real32 s = sqrt(v[0] * v[0] + v[1] * v[1]);
    v[0] = v[0] / s;
    v[1] = v[1] / s;
}

void normalize3(Real32 v[3])
{
    Real32 s = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    v[0] = v[0] / s;
    v[1] = v[1] / s;
    v[2] = v[2] / s;
}

void init(void)
{
    Int32 i, j, k;

    srand(30757);
    for (i = 0 ; i < B ; i++)
    {
        p[i] = i;
        g1[i] = Real32((rand() % (B + B)) - B) / B;

        for (j = 0 ; j < 2 ; j++)
            g2[i][j] = Real32((rand() % (B + B)) - B) / B;
        normalize2(g2[i]);

        for (j = 0 ; j < 3 ; j++)
            g3[i][j] = Real32((rand() % (B + B)) - B) / B;
        normalize3(g3[i]);
    }

    while (--i)
    {
        k = p[i];
        p[i] = p[j = rand() % B];
        p[j] = k;
    }

    for (i = 0 ; i < B + 2 ; i++)
    {
        p[B + i] = p[i];
        g1[B + i] = g1[i];
        for (j = 0 ; j < 2 ; j++)
            g2[B + i][j] = g2[i][j];
        for (j = 0 ; j < 3 ; j++)
            g3[B + i][j] = g3[i][j];
    }
}
    
Real32 noise1(Real32 vec[1])
{
    Int32 bx0, bx1;
    Real32 rx0, rx1, sx, t, u, v;

    if (start)
    {
        start = 0;
        init();
    }

    setup(vec, 0, t, bx0, bx1, rx0, rx1);

    sx = sCurve(rx0);

    u = rx0 * g1[ p[ bx0 ] ];
    v = rx1 * g1[ p[ bx1 ] ];

    return lerp(sx, u, v);
}

Real32 noise2(Real32 vec[2])
{
    Int32 bx0, bx1, by0, by1, b00, b10, b01, b11;
    Real32 rx0, rx1, ry0, ry1, *q, sx, sy, a, b, t, u, v;
    Int32 i, j;

    if (start)
    {
        start = 0;
        init();
    }

    setup(vec, 0, t, bx0, bx1, rx0, rx1);
    setup(vec, 1, t, by0, by1, ry0, ry1);

    i = p[ bx0 ];
    j = p[ bx1 ];

    b00 = p[ i + by0 ];
    b10 = p[ j + by0 ];
    b01 = p[ i + by1 ];
    b11 = p[ j + by1 ];

    sx = sCurve(rx0);
    sy = sCurve(ry0);

    q = g2[ b00 ] ; u = at2(q, rx0,ry0);
    q = g2[ b10 ] ; v = at2(q, rx1,ry0);
    a = lerp(sx, u, v);

    q = g2[ b01 ] ; u = at2(q, rx0,ry1);
    q = g2[ b11 ] ; v = at2(q, rx1,ry1);
    b = lerp(sx, u, v);

    return lerp(sy, a, b);
}

Real32 noise3(Real32 vec[3])
{
    Int32 bx0, bx1, by0, by1, bz0, bz1, b00, b10, b01, b11;
    Real32 rx0, rx1, ry0, ry1, rz0, rz1, *q, sy, sz, a, b, c, d, t, u, v;
    Int32 i, j;

    if (start)
    {
        start = 0;
        init();
    }

    setup(vec, 0, t, bx0, bx1, rx0, rx1);
    setup(vec, 1, t, by0, by1, ry0, ry1);
    setup(vec, 2, t, bz0, bz1, rz0, rz1);

    i = p[ bx0 ];
    j = p[ bx1 ];

    b00 = p[ i + by0 ];
    b10 = p[ j + by0 ];
    b01 = p[ i + by1 ];
    b11 = p[ j + by1 ];

    t  = sCurve(rx0);
    sy = sCurve(ry0);
    sz = sCurve(rz0);

    q = g3[ b00 + bz0 ] ; u = at3(q, rx0,ry0,rz0);
    q = g3[ b10 + bz0 ] ; v = at3(q, rx1,ry0,rz0);
    a = lerp(t, u, v);

    q = g3[ b01 + bz0 ] ; u = at3(q, rx0,ry1,rz0);
    q = g3[ b11 + bz0 ] ; v = at3(q, rx1,ry1,rz0);
    b = lerp(t, u, v);

    c = lerp(sy, a, b);

    q = g3[ b00 + bz1 ] ; u = at3(q, rx0,ry0,rz1);
    q = g3[ b10 + bz1 ] ; v = at3(q, rx1,ry0,rz1);
    a = lerp(t, u, v);

    q = g3[ b01 + bz1 ] ; u = at3(q, rx0,ry1,rz1);
    q = g3[ b11 + bz1 ] ; v = at3(q, rx1,ry1,rz1);
    b = lerp(t, u, v);

    d = lerp(sy, a, b);

    return lerp(sz, c, d);
}

Real32 noise(Real32 vec[], Int32 len)
{
    // noise functions over 1, 2, and 3 dimensions 
    switch (len)
    {
      case 1: return noise1(vec);
      case 2: return noise2(vec);
      case 3: return noise3(vec);
      case 0:
      default: return 0.0f;
    }
}

};


/*! create a noise texture. 
    Based on code my 
 */

bool createNoise(Image *image,
                 Image::PixelFormat pixelformat,
                 UInt16 numOctaves,
                 UInt16 size,
                 UInt8 dim,
                 bool splitOctaves)
{
    Int32 f, i, j, k, c, w, h, frequency = 4;
    Real32 ni[3], amp = 0.5, inci, incj, inck;
    unsigned char  *data, *ptr = NULL;
    bool ok = true;

    if (image == NULL)
    {
        FFATAL (("No output image given\n"));
        return false;
    }

    switch (dim)
    {
        case 1:
            ok = image->set(pixelformat, size);
            w = h = 1;
            break;
        case 2:
            ok = image->set(pixelformat, size, size);
            w = size; 
            h = 1;
            break;
        case 3:
            ok = image->set(pixelformat, size, size, size);
            w = h = size;
            break;
        default:
            ok = image->set(pixelformat, size, size); 
            dim = 2; 
            w = size; 
            h = 1;
            FWARNING(("createNoise: Use [1|2|3] for image dimension (default 2)\n"));
            break;
    }

    if ( ! (ok && (data = image->editData())) )
    { 
        FFATAL(("createNoise: Could not create image\n"));
        return false;
    }

    UInt16 ncomp = image->getComponents();

    if(splitOctaves && numOctaves > ncomp)
    {
        FWARNING(("createNoise: try to split %d octaves, but only have %d"
                    " components!\n", numOctaves, ncomp ));
        numOctaves = ncomp;
    }

    for (f=0; f<numOctaves; ++f, frequency*=2, amp*=0.5)
    {
        ptr = data;

        setNoiseFrequency(frequency);
        ni[0] = ni[1] = ni[2] = 0;
        inci = 1.0 / (size / Real32(frequency));
        incj = 1.0 / (size / Real32(frequency));
        inck = 1.0 / (size / Real32(frequency));

        for (i=0; i<size; ++i, ni[0]+=inci)
        {
            for (j=0; j<w; ++j, ni[1]+=incj)
            {
                for (k=0; k<h; ++k, ni[2]+=inck)
                {
                    // calculate numOctaves of noise and scale to range [0;1]
                    if (splitOctaves)
                    {
                        *(ptr+f) = UInt8(((noise(ni, dim) + 1) * amp) * 128.0);
                    
                        ptr+=ncomp;
                    }
                    else 
                    {
                        for(c = 0; c < ncomp; ++c, ++ptr, ni[0] += 1)
                            (*ptr)  += UInt8(((noise(ni, dim) + 1) * amp) * 128.0);
                        
                        ni[0] -= ncomp;
                    }
                }
            }
        }
        FNOTICE(("Generated %dD noise: octave %d/%d...\n", dim, f+1, numOctaves));
    }

    return true;
}


bool createGamma(Image *pImg, UInt32 size, Real32 gamma)
{
    if(pImg == NULL)
    {
        FFATAL (("No output image given\n"));
        return false;
    }

    pImg->set(Image::OSG_L_PF, 
              size, 
              1,
              1,
              1,
              1,
              0.0,
              0,
              Image::OSG_FLOAT32_IMAGEDATA);

    Real32 *pDst = reinterpret_cast<Real32 *>(pImg->editData());

    for(UInt32 i = 0; i < size; i++) 
    {
        Real32 x = Real32(i) / Real32(size);

        pDst[i] = pow(x, gamma);
    }

    return true;
}

bool createVignette(Image  *pImg, 
                    UInt32  width, 
                    UInt32  height, 
                    Real32  r0, 
                    Real32  r1    )
{
    if(pImg == NULL)
    {
        FFATAL (("No output image given\n"));
        return false;
    }

    pImg->set(Image::OSG_L_PF, 
              width, 
              height,
              1,
              1,
              1,
              0.0,
              0,
              Image::OSG_FLOAT32_IMAGEDATA);

    Real32 *pDst = reinterpret_cast<Real32 *>(pImg->editData());

    for(UInt32 y = 0; y < height; y++) 
    {
        for(UInt32 x = 0; x < width; x++) 
        {
            Real32 radius = 
                osgSqrt((x - width  / 2) * (x - width  / 2) + 
                        (y - height / 2) * (y - height / 2));

            if(radius > r0) 
            {
                if(radius < r1) 
                {
                    Real32 t = 1.0 - (radius - r0) / (r1 - r0);
                    Real32 a = t * 2 - 1;
                    float reduce = 
                        (0.25 * Pi         + 
                         0.5  * osgASin(a) + 
                         0.5  * a * osgSqrt(1 - a * a)) / (0.5 * Pi);

                    pDst[y * width + x] = reduce;
                } 
                else 
                {
                    pDst[y * width + x] = 0.0;
                }
            }
            else 
            {
                pDst[y * width + x] = 1.0;
            }
        }
    }

    return true;
}

bool convertCrossToCubeMap(Image const *pIn,
                           Image       *pOut)
{
    if(pIn == NULL || pOut == NULL)
    {
        FFATAL (("No appropriate images given\n"));
        return false;
    }

    int face_width =  pIn->getWidth()  / 3;
    int face_height = pIn->getHeight() / 4;


    pOut->set(pIn->getPixelFormat(),
              face_width,
              face_height,
              1,
              1,
              1,
              0.0,
              NULL,
              pIn->getDataType(),
              true,
              6);

   
          Real32 *pDst = reinterpret_cast<      Real32 *>(pOut->editData());
    const Real32 *pSrc = reinterpret_cast<const Real32 *>(pIn ->getData ());

    OSG::UInt32 j;

    // - X
    for(j = 0; j < face_height; j++) 
    {
        for(int i = 0;  i < face_width; i++) 
        {
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (i * 3) +
                           0];
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (i * 3) +
                           1];
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (i * 3) +
                           2];
        }
    }

   
    // +X
    for (j=0; j < face_height; j++) 
    {
        for (int i = 0;  i < face_width; i++) 
        {
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (2 * face_width + i) * 3 +
                           0];
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (2 * face_width + i) * 3 +
                           1];
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (2 * face_width + i) * 3 +
                           2];
        }
    }

    // +Y
    OSG::UInt32 uiBaseY  = 3 * face_height;
    OSG::UInt32 uiBaseX  = face_width;
    
    for(OSG::UInt32 j = 0; j < face_height; ++j)
    {
        for(OSG::UInt32 i = 0; i < face_width; ++i)
        {            
            *pDst++ = pSrc[(uiBaseY + j) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           0];
            *pDst++ = pSrc[(uiBaseY + j) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           1];
            *pDst++ = pSrc[(uiBaseY + j) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           2];
        }
    }

    // -Y
    uiBaseY  = face_height;
    uiBaseX  = face_width;
    
    for(OSG::UInt32 j = 0; j < face_height; ++j)
    {
        for(OSG::UInt32 i = 0; i < face_width; ++i)
        {            
            *pDst++ = pSrc[(uiBaseY + j) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +

                           0];
            *pDst++ = pSrc[(uiBaseY + j) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           1];
            *pDst++ = pSrc[(uiBaseY + j) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           2];
        }
    }


    // -Z
    uiBaseY  = 0;
    uiBaseX  = face_width;
    
    for(OSG::UInt32 j = 0; j < face_height; ++j)
    {
        for(OSG::UInt32 i = 0; i < face_width; ++i)
        {            
            *pDst++ = pSrc[(j + 1) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           0];
            *pDst++ = pSrc[(j + 1) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           1];
            *pDst++ = pSrc[(j + 1) * (pIn->getWidth() * 3) +
                           (pIn->getWidth() - (face_width + i + 1)) * 3                     +
                           2];
        }
    }

    // +Z
    uiBaseY  = 2 * face_height;
    uiBaseX  = face_width;
    
    for(OSG::UInt32 j = 0; j < face_height; ++j)
    {
        for(OSG::UInt32 i = 0; i < face_width; ++i)
        {            
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (i + uiBaseX) * 3                     +
                           0];
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (i + uiBaseX) * 3                     +
                           1];
            *pDst++ = pSrc[(pIn->getHeight() - (face_height + j + 1)) * (pIn->getWidth() * 3) +
                           (i + uiBaseX) * 3                     +
                           2];
        }
    }

    return true;
}

OSG_END_NAMESPACE
#endif
