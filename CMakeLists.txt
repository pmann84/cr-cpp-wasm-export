cmake_minimum_required(VERSION 3.22)

project(
    cr_cpp_wasm_export
    VERSION 1.0.0
    LANGUAGES CXX C
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_SUPPRESS_REGENERATION true)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(lib)