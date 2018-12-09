include_directories(${CMAKE_SOURCE_DIR}/include)


set(SRCS_LIB  .)
file(GLOB MYLIB ${SRCS_LIB}/*/*.cpp)
#add_executable(${MYLIB})
add_library(Mysrc ${MYLIB})