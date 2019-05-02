project(hello)

cmake_minimum_required(VERSION 3.5)

add_library(hello_lib SHARED
    src/Hello.cpp
)
add_library(hello::library ALIAS hello_lib)
target_include_directories(hello_lib
  PUBLIC
   ${PROJECT_SOURCE_DIR}/include
)

add_executable(hello
    src/main.cpp
)

target_link_libraries(hello
    PRIVATE 
        hello_lib
)