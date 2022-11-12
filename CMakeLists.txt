cmake_minimum_required(VERSION 3.15)

project(OODTutorial)

add_executable(${PROJECT_NAME} main.cpp)

include_directories(${OODTutorial_SOURCE_DIR}/include)

add_subdirectory(src)