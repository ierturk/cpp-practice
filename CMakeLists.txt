cmake_minimum_required(VERSION 3.14)
project(cpp-practice CXX)

set(CMAKE_CXX_STANDARD 11)
# add_compile_options(-v)

add_subdirectory(src/lib)
add_subdirectory(src/test)
add_subdirectory(src/app)