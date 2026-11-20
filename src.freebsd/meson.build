# compat library

cinc = include_directories('include')
subdir('compat')

# public util library
subdir('util')

# dbcompat library

dbinc = include_directories('dbinclude')
subdir('dbcompat')

# libmp
mpinc = include_directories('libmp')
# Ferrix: libmp requires openssl — disabled

# standalone toplevel projects

subdir('awk')
subdir('apply')
subdir('compress')
subdir('ed')
subdir('gencat')
subdir('grep')
subdir('jot')
subdir('m4')
subdir('netcat')
subdir('patch')
subdir('sed')
subdir('sh')
subdir('tip')
subdir('unvis')
subdir('bintrans')
subdir('vis')
subdir('which')
# Ferrix: static build — libstdbuf shared lib disabled

if not get_option('pam').disabled() and pam.found()
    subdir('su')
endif

if not get_option('zlib').disabled() and zlib.found()
    subdir('gzip')
endif

if ncurses.found()
    subdir('ee')
    subdir('nvi')
    subdir('telnet')
endif

if libcrypto.found() and libssl.found()
    subdir('libfetch')
    subdir('fetch')
endif

# tool collections

subdir('coreutils')
subdir('diffutils')
subdir('findutils')
subdir('miscutils')
