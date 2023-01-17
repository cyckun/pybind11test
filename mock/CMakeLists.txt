
file(GLOB_RECURSE SRC_FRONTEND ${CMAKE_SOURCE_DIR}/mock/*.cpp)
add_library(psimock ${SRC_FRONTEND})
