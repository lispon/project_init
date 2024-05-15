cmake_minimum_required(VERSION 3.14)

project(cmake_with_gtest
    LANGUAGES C CXX
    VERSION 0.0.0.1
    DESCRIPTION ""
    HOMEPAGE_URL ""
)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(src_lists)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src src_lists)

set(exe_name cmake_with_gtest_demo)
add_executable(${exe_name} ${src_lists})

target_include_directories(${exe_name}
PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc_private
)

add_subdirectory(tests)
