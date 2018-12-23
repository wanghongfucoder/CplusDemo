cmake_minimum_required(VERSION 3.9)
project(CplusDemo)

set(CMAKE_CXX_STANDARD 11)

include_directories(./include)
link_directories(./lib)
add_subdirectory(src)
set(TEST_SRCS  ./test)
file(GLOB UT ${TEST_SRCS}/*/*.cpp)
add_executable(CplusDemo main.cpp ${UT} include/threadpool/threadpool.h include/threadpool/SyncQueue.h)
target_link_libraries(CplusDemo pthread gtest gmock Mysrc)