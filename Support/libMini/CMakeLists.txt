CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

IF(OSGLibMiniSrcDir)

  PROJECT(OSGLibMini)

  SET(${PROJECT_NAME}SharedTarget osgmini)
  SET(${PROJECT_NAME}StaticTarget osgmini)

  SET(OSG_LIBMINI_SRCS ${OSGLibMiniSrcDir}/mini.cpp 
                       ${OSGLibMiniSrcDir}/miniOGL.cpp
	                   ${OSGLibMiniSrcDir}/miniv3f.cpp 
                       ${OSGLibMiniSrcDir}/miniv3d.cpp 
                       ${OSGLibMiniSrcDir}/miniv4f.cpp 
                       ${OSGLibMiniSrcDir}/miniv4d.cpp
	                   ${OSGLibMiniSrcDir}/minimath.cpp 
                       ${OSGLibMiniSrcDir}/minimpfp.cpp 
                       ${OSGLibMiniSrcDir}/minitime.cpp  
                       ${OSGLibMiniSrcDir}/miniio.cpp 
                       ${OSGLibMiniSrcDir}/minirgb.cpp 
                       ${OSGLibMiniSrcDir}/minicrs.cpp
	                   ${OSGLibMiniSrcDir}/ministub.cpp 
                       ${OSGLibMiniSrcDir}/minitile.cpp 
                       ${OSGLibMiniSrcDir}/miniload.cpp
	                   ${OSGLibMiniSrcDir}/minicoord.cpp 
                       ${OSGLibMiniSrcDir}/miniwarp.cpp
	                   ${OSGLibMiniSrcDir}/minilayer.cpp 
                       ${OSGLibMiniSrcDir}/miniterrain.cpp 
                       ${OSGLibMiniSrcDir}/miniearth.cpp
	                   ${OSGLibMiniSrcDir}/minicache.cpp 
                       ${OSGLibMiniSrcDir}/minishader.cpp
	                   ${OSGLibMiniSrcDir}/miniray.cpp 
                       ${OSGLibMiniSrcDir}/ministrip.cpp
	                   ${OSGLibMiniSrcDir}/minipoint.cpp 
                       ${OSGLibMiniSrcDir}/minitext.cpp 
                       ${OSGLibMiniSrcDir}/minisky.cpp 
                       ${OSGLibMiniSrcDir}/miniglobe.cpp
	                   ${OSGLibMiniSrcDir}/minitree.cpp 
                       ${OSGLibMiniSrcDir}/minibrick.cpp
                       ${OSGLibMiniSrcDir}/minilod.cpp
	                   ${OSGLibMiniSrcDir}/minimesh.cpp 
                       ${OSGLibMiniSrcDir}/minibspt.cpp 
                       ${OSGLibMiniSrcDir}/miniproj.cpp
	                   ${OSGLibMiniSrcDir}/pnmbase.cpp
                       ${OSGLibMiniSrcDir}/pnmsample.cpp
	                   ${OSGLibMiniSrcDir}/database.cpp 
                       ${OSGLibMiniSrcDir}/datafill.cpp
	                   ${OSGLibMiniSrcDir}/datacloud.cpp 
                       ${OSGLibMiniSrcDir}/datacache.cpp 
                       ${OSGLibMiniSrcDir}/datagrid.cpp
	                   ${OSGLibMiniSrcDir}/datacalc.cpp 
                       ${OSGLibMiniSrcDir}/dataparse.cpp
	                   ${OSGLibMiniSrcDir}/lunascan.cpp 
                       ${OSGLibMiniSrcDir}/lunaparse.cpp 
                       ${OSGLibMiniSrcDir}/lunacode.cpp)

  SET(OSG_LIBMINI_HDR ${OSGLibMiniSrcDir}/minibase.h
	                  ${OSGLibMiniSrcDir}/minivec.h 
                      ${OSGLibMiniSrcDir}/minimtx.h
	                  ${OSGLibMiniSrcDir}/minidyna.h 
                      ${OSGLibMiniSrcDir}/minigeom.h 
                      ${OSGLibMiniSrcDir}/minisort.h 
                      ${OSGLibMiniSrcDir}/ministring.h
                      ${OSGLibMiniSrcDir}/mini.h 
                      ${OSGLibMiniSrcDir}/miniOGL.h
	                  ${OSGLibMiniSrcDir}/miniv3f.h
                      ${OSGLibMiniSrcDir}/miniv3d.h 
                      ${OSGLibMiniSrcDir}/miniv4f.h 
                      ${OSGLibMiniSrcDir}/miniv4d.h
	                  ${OSGLibMiniSrcDir}/minimath.h 
                      ${OSGLibMiniSrcDir}/minimpfp.h 
                      ${OSGLibMiniSrcDir}/minitime.h  
                      ${OSGLibMiniSrcDir}/miniio.h 
                      ${OSGLibMiniSrcDir}/minirgb.h 
                      ${OSGLibMiniSrcDir}/minicrs.h
	                  ${OSGLibMiniSrcDir}/ministub.h 
                      ${OSGLibMiniSrcDir}/minitile.h 
                      ${OSGLibMiniSrcDir}/miniload.h
	                  ${OSGLibMiniSrcDir}/minicoord.h 
                      ${OSGLibMiniSrcDir}/miniwarp.h
	                  ${OSGLibMiniSrcDir}/minilayer.h 
                      ${OSGLibMiniSrcDir}/miniterrain.h 
                      ${OSGLibMiniSrcDir}/miniearth.h
	                  ${OSGLibMiniSrcDir}/minicache.h 
                      ${OSGLibMiniSrcDir}/minishader.h
	                  ${OSGLibMiniSrcDir}/miniray.h 
                      ${OSGLibMiniSrcDir}/ministrip.h
	                  ${OSGLibMiniSrcDir}/minipoint.h 
                      ${OSGLibMiniSrcDir}/minitext.h 
                      ${OSGLibMiniSrcDir}/minisky.h 
                      ${OSGLibMiniSrcDir}/miniglobe.h
	                  ${OSGLibMiniSrcDir}/minitree.h 
                      ${OSGLibMiniSrcDir}/minibrick.h 
                      ${OSGLibMiniSrcDir}/minilod.h
	                  ${OSGLibMiniSrcDir}/minimesh.h 
                      ${OSGLibMiniSrcDir}/minibspt.h 
                      ${OSGLibMiniSrcDir}/miniproj.h
	                  ${OSGLibMiniSrcDir}/pnmbase.h 
                      ${OSGLibMiniSrcDir}/pnmsample.h
	                  ${OSGLibMiniSrcDir}/database.h 
                      ${OSGLibMiniSrcDir}/datafill.h
	                  ${OSGLibMiniSrcDir}/datacloud.h 
                      ${OSGLibMiniSrcDir}/datacache.h 
                      ${OSGLibMiniSrcDir}/datagrid.h
	                  ${OSGLibMiniSrcDir}/datacalc.h 
                      ${OSGLibMiniSrcDir}/dataparse.h
	                  ${OSGLibMiniSrcDir}/lunascan.h 
                      ${OSGLibMiniSrcDir}/lunaparse.h 
                      ${OSGLibMiniSrcDir}/lunacode.h)

  SET(OSGLIBMINI_DEF )

#  INCLUDE_DIRECTORIES(${CMAKE_BINARY_DIR}/libtiff)
#  INCLUDE_DIRECTORIES(${OSGZLibSrcDir})
#  INCLUDE_DIRECTORIES(${OSGJpegLibSrcDir})

#  IF(BUILD_SHARED_LIBS)
#    ADD_LIBRARY(${${PROJECT_NAME}SharedTarget} SHARED ${OSG_TIFFLIB_SRCS}
#                                                      ${OSGTiffLibSrcDir}/libtiff/libtiff.def)

#    SET_TARGET_PROPERTIES(${${PROJECT_NAME}SharedTarget} PROPERTIES
#                          DEBUG_POSTFIX "D")

#    SET(OSGTIFFLIB_DEF_SHARED ${OSGTIFFLIB_DEF};ZLIB_DLL)

#    SET_TARGET_PROPERTIES(${${PROJECT_NAME}SharedTarget} PROPERTIES
#                          COMPILE_DEFINITIONS "${OSGTIFFLIB_DEF_SHARED}")

#    TARGET_LINK_LIBRARIES(${${PROJECT_NAME}SharedTarget} osgzlib)
#    TARGET_LINK_LIBRARIES(${${PROJECT_NAME}SharedTarget} libosgjpg)

#    INSTALL(TARGETS ${${PROJECT_NAME}SharedTarget}
#                CONFIGURATIONS Release Debug
#                RUNTIME DESTINATION bin
#                LIBRARY DESTINATION lib
#                ARCHIVE DESTINATION lib)

#  ENDIF(BUILD_SHARED_LIBS)

  IF(BUILD_STATIC_LIBS)
    ADD_LIBRARY(${${PROJECT_NAME}StaticTarget} STATIC ${OSG_LIBMINI_SRCS})

    IF(WIN32)
      SET_TARGET_PROPERTIES(${${PROJECT_NAME}StaticTarget} PROPERTIES
                            DEBUG_POSTFIX "D")
    ENDIF(WIN32)

    SET_TARGET_PROPERTIES(${${PROJECT_NAME}StaticTarget} PROPERTIES
                          COMPILE_DEFINITIONS "${OSGLIBMINI_DEF}")


    IF(WIN32)    
      INSTALL(TARGETS ${${PROJECT_NAME}StaticTarget}
              CONFIGURATIONS Release Debug
              RUNTIME DESTINATION bin
              LIBRARY DESTINATION lib
              ARCHIVE DESTINATION lib)
    ELSE(WIN32)
      INSTALL(TARGETS ${${PROJECT_NAME}StaticTarget}
                  RUNTIME DESTINATION lib${OSG_LIBDIR_SUFFIX}
                  LIBRARY DESTINATION lib${OSG_LIBDIR_SUFFIX}
                  ARCHIVE DESTINATION lib${OSG_LIBDIR_SUFFIX})
    ENDIF(WIN32)
  ENDIF(BUILD_STATIC_LIBS)

  INSTALL(FILES ${OSG_LIBMINI_HDR}
          DESTINATION include/mini
          PERMISSIONS OWNER_WRITE OWNER_READ
                      GROUP_READ
                      WORLD_READ)

ELSE(OSGLibMiniSrcDir)
  SET(OSGLibMiniSrcDir "" CACHE PATH "")
ENDIF(OSGLibMiniSrcDir)
