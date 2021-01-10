#
# Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática (1º)
# Asignatura: Informática Básica
# 
# @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
# @brief CMakeLists.txt para complejos
# 

# Ficheros
#    complejos
#    complejo
#    run_tests

cmake_minimum_required(VERSION 3.1)
project(complejos
    VERSION 1.0
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR}/src)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_FLAGS_DEBUG "-g -o0")
set(CMAKE_CXX_FLAGS_RELEASE "-o3")

add_executable(complejos
    ${PROJECT_SOURCE_DIR}/src/complejo.cc
    ${PROJECT_SOURCE_DIR}/src/complejo.h
    ${PROJECT_SOURCE_DIR}/src/complejos.cc)

add_executable(run_tests
    ${PROJECT_SOURCE_DIR}/test/test_complejo.cc
    ${PROJECT_SOURCE_DIR}/src/complejo.cc
    ${PROJECT_SOURCE_DIR}/src/complejo.h
    ${PROJECT_SOURCE_DIR}/test/gtest_main.cc)

target_compile_features(complejos PRIVATE cxx_std_14)

target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)
target_compile_features(run_tests PRIVATE cxx_std_14)
target_compile_options(run_tests PRIVATE -Wall -Wextra -Wpedantic)
