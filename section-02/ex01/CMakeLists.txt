cmake_minimum_required(VERSION 3.10)
# Nome do projeto
project(exercio01 VERSION 1.0)
# Especifica os diretórios onde buscar por includes
include_directories(${PROJECT_SOURCE_DIR}/src)
# Adiciona o executável
add_executable(my_program src/main.c)
# Linka a biblioteca matemática (libm)
target_link_libraries(my_program m)
