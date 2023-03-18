cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(Stdpar_test_inner CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS Off)

file(GLOB all_files ${PROJECT_SOURCE_DIR}/../*Inner.C)

string(APPEND CMAKE_CXX_FLAGS "-g -stdpar -O3 -gpu=cuda12.0 -pedantic -Wall")
string(APPEND CMAKE_SHARED_LINKER_FLAGS "-Wl,--no-undefined")

add_library(Stdpar_test_inner SHARED ${all_files})
target_include_directories(Stdpar_test_inner
  PRIVATE
    ${PROJECT_SOURCE_DIR}/../
)
