#include "Logger1.h"

#include <iostream>

Logger1::Logger1()
{
    //ctor
}

Logger1::~Logger1()
{
    //dtor
}

void Logger1::log(const std::string str) const
{
    std::cout << str << std::endl;
}
