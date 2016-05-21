set(UDIS86_FOUND 0)

file(GLOB_RECURSE UDIS86_SOURCE_DIR_INNER ${DEPENDENCIES_DIR}/udis86*/udis86.h)
LIST(GET UDIS86_SOURCE_DIR_INNER 0 UDIS86_SOURCE_DIR)
GET_FILENAME_COMPONENT(UDIS86_SOURCE_DIR ${UDIS86_SOURCE_DIR} DIRECTORY CACHE)
SET(UDIS86_BINARY_DIR ${UDIS86_SOURCE_DIR})

include(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(Udis86 DEFAULT_MSG UDIS86_SOURCE_DIR)

mark_as_advanced(
  UDIS86_SOURCE_DIR
  UDIS86_BINARY_DIR
)
