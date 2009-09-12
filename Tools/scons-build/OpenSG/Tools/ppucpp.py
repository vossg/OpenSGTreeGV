"""SCons.Tool.intelicpc

Tool-specific initialization for gcc.

There normally shouldn't be any need to import this module directly.
It will usually be imported through the generic SCons.Tool.Tool()
selection method.

"""

#
# Copyright (c) 2001, 2002, 2003, 2004, 2005, 2006, 2007 The SCons Foundation
#
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
# KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
# WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
# LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
# OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
# WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#

__revision__ = ""

import SCons.Util

import traceback
import SCons.Tool.cc as cc
import os, os.path
import re
import sys

pj = os.path.join
   
cplusplus = __import__('SCons.Tool.c++', globals(), locals(), ['*'])
    
compilers = ['ppu-g++']

def generate(env):

    static_obj, shared_obj = SCons.Tool.createObjBuilders(env)

    cplusplus.generate(env)

    env['CXX'] = env.Detect(compilers)

    env['SHCXXFLAGS'] = SCons.Util.CLVar('$CXXFLAGS -fPIC')
    
    cxx_path = env.WhereIs(compilers[0])

    ppu_base = os.path.dirname(os.path.dirname(os.path.dirname(cxx_path)))
    ppu_inc  = "-I" + pj(ppu_base, "sysroot/opt/cell/sdk/usr/include")

#    env.Append(SHCXXFLAGS=[ppu_inc])
    env.Append(CXXFLAGS=[ppu_inc])


    # determine compiler version
    if env['CXX']:
        line = os.popen(env['CXX'] + ' --version').readline()
        match = re.search(r'[0-9]+(\.[0-9]+)+', line)
        if match:
            env['CXXVERSION'] = match.group(0)

    return True

def exists(env):
    return env.Detect(compilers)
