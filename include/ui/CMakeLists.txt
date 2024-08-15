cmake_minimum_required(VERSION 3.11)
project(
    ui
    LANGUAGES CXX
    VERSION 1.0.0
)
set(
    SOURCE_LIB
    ui.cpp
)
add_library(
    ${PROJECT_NAME} STATIC ${SOURCE_LIB}
)
