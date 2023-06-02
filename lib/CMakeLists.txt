file(GLOB_RECURSE CORE_HDR *.hpp)
file(GLOB_RECURSE CORE_SRC *.cpp)

# Note we have to use add_executable as its the only way to generate the js and wasm files
add_executable(lib ${CORE_SRC} ${CORE_HDR})

set_target_properties(lib PROPERTIES LINK_FLAGS "-s DEMANGLE_SUPPORT=1 --bind")