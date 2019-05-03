project(math)

add_library(exmath STATIC exmath.cpp)
add_executable(m01 m01.cpp)
add_executable(m02 m02.cpp)
add_executable(m03 m03.cpp)
add_executable(m04 m04.cpp)
add_executable(m05 m05.cpp)
add_executable(m06 m06.cpp)

#target_include_directories(m02 PUBLIC ${PROJECT_SOURCE_DIR}/)
target_link_libraries(m02 PUBLIC exmath)
target_link_libraries(m03 PUBLIC exmath)
target_link_libraries(m04 PUBLIC exmath)
target_link_libraries(m05 PUBLIC exmath)
target_link_libraries(m06 PUBLIC exmath)

