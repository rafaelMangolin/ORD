cmake_minimum_required(VERSION 3.1)
project(Aula_pratica_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES exercicio01.c)
add_executable(Aula_pratica_1 ${SOURCE_FILES} exercicio02.c)