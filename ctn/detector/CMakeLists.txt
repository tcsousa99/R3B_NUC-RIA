# Create a library called "libEnsarHPGeDet" which includes the source files given in
# the array .
# The extension is already found.  Any number of sources could be listed here.

Set(SYSTEM_INCLUDE_DIRECTORIES 
${SYSTEM_INCLUDE_DIRECTORIES}
${BASE_INCLUDE_DIRECTORIES}
)

set(INCLUDE_DIRECTORIES
${ROOT_INCLUDE_DIR}  
#put here all directories where header files are located
${R3BROOT_SOURCE_DIR}/ctn/data
${R3BROOT_SOURCE_DIR}/ctn/geometry
${R3BROOT_SOURCE_DIR}/ctn/detector
${R3BROOT_SOURCE_DIR}/r3bbase 
${R3BROOT_SOURCE_DIR}/r3bdata
${BASE_INCLUDE_DIRECTORIES}
)

include_directories( ${INCLUDE_DIRECTORIES})
include_directories(SYSTEM ${SYSTEM_INCLUDE_DIRECTORIES})

set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}
) 

link_directories( ${LINK_DIRECTORIES})

set(SRCS
#Put here your sourcefiles
EnsarHPGeDet.cxx 
)

# fill list of header files from list of source files
# by exchanging the file extension
CHANGE_FILE_EXTENSION(*.cxx *.h HEADERS "${SRCS}")

set(LINKDEF EnsarHPGeDetLinkDef.h)
set(LIBRARY_NAME EnsarHPGeDet)
set(DEPENDENCIES
    R3Bbase R3BData MCStack)

GENERATE_LIBRARY()
