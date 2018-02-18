#include "Logger3.h"

#include <chrono>
#include <ctime>
#include <iostream>

#include <LoggingTools.h>

Logger3::Logger3() : level(LogLevel_Error), use_timestamp(true)
{
    //ctor
}

Logger3::~Logger3()
{
    //dtor
}

void Logger3::log(const std::string str) const
{
    log(level, str);
}

void Logger3::log(const LogLevel lvl, const std::string str) const
{
    if (use_timestamp) {
        std::cout << getTimestamp() << " ";
    }
    std::cout << LoggingTools::logToString(lvl) << str << std::endl;
}

void Logger3::setLevel(const LogLevel lvl)
{
    level = lvl;
}

const std::string Logger3::getTimestamp() const
{
    auto time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::string t = std::ctime(&time);
    t.pop_back();   // Remove the trailing /n
    return t;
}
