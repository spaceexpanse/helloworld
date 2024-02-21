cmake_minimum_required(VERSION 3.0)
project(hello)

set(packages "libspex" "jsoncpp" "libglog" "gflags" "libzmq" "openssl")

add_executable(hello hello.cpp)

#include_directories("include")
#link_directories("lib")

target_compile_options(hello PRIVATE "-Wall" "-Werror" "-Wno-deprecated" "-Wno-deprecated-declarations" "-pedantic" "-std=c++14" "-DGLOG_NO_ABBREVIATED_SEVERITIES" "-L${CMAKE_SOURCE_DIR}lib" "-I${CMAKE_SOURCE_DIR}include/${pkg}")

foreach(pkg ${packages})
    find_package(PkgConfig REQUIRED)
    pkg_search_module(${pkg} REQUIRED ${pkg})
    target_include_directories(hello PRIVATE ${${pkg}_INCLUDE_DIRS})
    target_link_libraries(hello PRIVATE ${${pkg}_LIBRARIES})
endforeach()

find_package(Threads REQUIRED)
target_link_libraries(hello PRIVATE Threads::Threads)

target_link_libraries(hello PRIVATE stdc++fs)
