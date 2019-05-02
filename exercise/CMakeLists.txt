project(hello)
cmake_minimum_required(VERSION 3.10)
file(GLOB HELLO_SOURCES "src/*.cpp")
add_executable(hello 
    ${HELLO_SOURCES}
)

add_subdirectory(math)