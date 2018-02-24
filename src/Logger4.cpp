#include "Logger4.h"

#include <chrono>
#include <ctime>
#include <iostream>

#include <sstream>

#include <LoggingTools.h>

Logger4::Logger4() : level(LogLevel_Info), use_timestamp(true)
{
    //ctor
}

Logger4::~Logger4()
{
    //dtor
}

void Logger4::log(const std::string str) const
{
    log(level, str);
}

void Logger4::log(const LogLevel lvl, const std::string str) const
{
    if (use_timestamp) {
        std::cout << getTimestamp() << " ";
    }
    std::cout << LoggingTools::logToString(lvl) << str << std::endl;
}

void Logger4::setLevel(const LogLevel lvl)
{
    level = lvl;
}

const std::string Logger4::getTimestamp() const
{
    std::stringstream ss;
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    auto t = localtime(&now);

    ss << t->tm_year + 1900 << "/" << normalize(t->tm_mon + 1) << "/" << normalize(t->tm_mday) << " ";
    ss << normalize(t->tm_hour) << ":" << normalize(t->tm_min) << ":" << normalize(t->tm_sec);

    return ss.str();
}

const std::string Logger4::normalize(const int i) const
{
    std::stringstream ss;
    if (i < 10) {
        ss << 0;
    }
    ss << i;
    return ss.str();
}
