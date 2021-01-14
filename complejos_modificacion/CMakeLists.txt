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

cmake_minimum_required(VERSION 3.1)
project(complejos
    VERSION 1.0
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -o0")
set(CMAKE_CXX_FLAGS_RELEASE "-o3")

add_executable(complejos
    ${PROJECT_SOURCE_DIR}/src/complejo.cc
    ${PROJECT_SOURCE_DIR}/src/complejo.h
    ${PROJECT_SOURCE_DIR}/src/complejos.cc)


