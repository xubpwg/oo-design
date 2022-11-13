cmake_minimum_required(VERSION 3.15)

project(OODTutorialTests)

list(APPEND TestSourceFiles main.cpp)
#list(APPEND TestSourceFiles ForUnitTesting_test.cpp)
list(APPEND TestSourceFiles Outcome_test.cpp)

add_executable(OODTutorialTests ${TestSourceFiles})

target_include_directories(${PROJECT_NAME} 
                           PRIVATE ../include/thirdparty/doctest
                           PRIVATE ../include)

add_subdirectory(../src ${PROJECT_BINARY_DIR}/src)