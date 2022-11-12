#include "HelloWorldPrinter.hpp"

#include <iostream>

HelloWorldPrinter::HelloWorldPrinter(const char* helloWorldString) 
    : mHelloWorldString(helloWorldString)
{

}

HelloWorldPrinter::HelloWorldPrinter(const std::string& helloWorldString) 
    : mHelloWorldString(helloWorldString)
{

}

void HelloWorldPrinter::printHelloWorld()
{
    std::cout << mHelloWorldString << std::endl;
}