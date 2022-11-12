list(APPEND SourceFiles HelloWorldPrinter.cpp)
list(APPEND SourceFiles ForUnitTesting.cpp)

target_sources(${PROJECT_NAME} PRIVATE ${SourceFiles})