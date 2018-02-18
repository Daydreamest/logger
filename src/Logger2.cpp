#include "Logger2.h"

#include <iostream>

#include <LoggingTools.h>

Logger2::Logger2() : level(LogLevel_Debug)
{
    //ctor
}

Logger2::~Logger2()
{
    //dtor
}

void Logger2::log(const std::string str) const
{
    log(level, str);
}

void Logger2::setLevel(const LogLevel lvl)
{
    level = lvl;
}

void Logger2::log(const LogLevel lvl, const std::string str) const
{
    std::cout << LoggingTools::logToString(lvl) << str << std::endl;
}
