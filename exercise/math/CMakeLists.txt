project(math)

add_library(exmath STATIC exmath.cpp)
add_executable(m01 m01.cpp)
add_executable(m02 m02.cpp)
target_link_libraries(m02 PUBLIC exmath)
