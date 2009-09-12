
import os
import SCons.Util
import SCons


compilers = ['spu-gcc']

SPUAction     = SCons.Action.Action("$SPUCOM",   "$SPUCOMSTR"  )
ShSPUAction   = SCons.Action.Action("$SHSPUCOM", "$SHSPUCOMSTR")

SPUProgAction = SCons.Action.Action("$SPUPROGCOM", "$SPUCOMSTR")

SPUEmbAction  = SCons.Action.Action("$SPUEMBCOM", "$SPUCOMSTR")

def spuEmbbedEmitter(target, source, env):
    adjustixes = SCons.Util.adjustixes

#    bs = SCons.Util.splitext(str(source[0].name))[0]
#    bs = os.path.join(str(target[0].get_dir()),bs)
    # first target (header) is automatically added by builder
#    if len(target) < 2:
#        # second target is implementation
#        target.append(adjustixes(bs,
#                                 env.subst('$QT_UICIMPLPREFIX'),
#                                 env.subst('$QT_UICIMPLSUFFIX')))
#    if len(target) < 2:
        # third target is moc file
#        target.append(adjustixes(bs,
#                                 env.subst('$QT_MOCHPREFIX'),
#                                 env.subst('$QT_MOCHSUFFIX')))
    for tgt in target:
        tgt.attributes.shared = 1

    return (target, source)


def _genSpuSymbol(a):
    return SCons.Util.splitext(os.path.basename(a.name))[0]


def generate(env):

    static_obj = env['BUILDERS']['StaticObject']
    shared_obj = env['BUILDERS']['SharedObject']

    static_obj.add_action('.cspu',   SPUAction)

    shared_obj.add_action('.exespu', SPUEmbAction)
    shared_obj.add_action('.cspu',   ShSPUAction)

    static_obj.add_emitter('.cspu',   SCons.Defaults.StaticObjectEmitter)

    shared_obj.add_emitter('.exespu', spuEmbbedEmitter)
    shared_obj.add_emitter('.cspu',   SCons.Defaults.SharedObjectEmitter)

    env['SHSPUCOM']   = '$SHSPUCC -x c -o $TARGET -c $SPUFLAGS $SHSPUFLAGS $SOURCES'

    env['SPUCOM']     = '$SPUCC   -x c -o $TARGET -c $SPUFLAGS $STSPUFLAGS $SOURCES $_CPPINCFLAGS'
    env['SPUPROGCOM'] = '$SPUCC   -o $TARGET $SPUFLAGS $STSPUFLAGS $SOURCES'

    env['_genSpuSymbol'] = _genSpuSymbol

    env['SPUEMBCOM'] = 'ppu-embedspu $SPUFLAGS $SPUEMBFLAGS $(${_genSpuSymbol(TARGET)}$) $SOURCES $TARGET'

    env['SPUCC']    = 'spu-gcc'
    env['SHSPUCC']  = 'spu-gcc'

    env['SPUSUFFIX']  = '.cspu'

    spus = SCons.Scanner.ClassicCPP("SPUScanner",
                                   ".cspu",
                                   "CPPPATH",
                                   '^[ \t]*#[ \t]*(?:include)[ \t]*(<|")([^>"]+)(>|")')


    SCons.Tool.SourceFileScanner.add_scanner('.cspu', spus)

    spuProgBld = SCons.Builder.Builder(action = SPUProgAction, 
                                       suffix='.exespu',
                                       src_suffix='$OBJSUFFIX',
                                       src_builder='Object')

    env.Append(BUILDERS = {'SPUProgram' : spuProgBld} )



#    spuEmbBld = SCons.Builder.Builder(action = SPUEmbAction, 
#                                       suffix='.espu',
#                                       src_suffix='.exespu')

#    env.Append(BUILDERS = {'SPUEmbeddedProgram' : spuEmbBld} )

#    try:
#        cubin_builder = env['BUILDERS']['Cubin']
#    except KeyError:
#
#        cubinAction = SCons.Action.Action("$CUBINCOM",   "$CUBINCOMSTR"  )
#
#        env['BUILDERS']['Cubin'] = \
#            SCons.Builder.Builder(action = "$CUBINCOM", 
#                                  suffix = '.cubin',
#                                  src_suffix = '.cu',
#                                  source_scanner = SCons.Tool.SourceFileScanner)

    return True

def exists(env):
    return env.Detect(compilers)
