#include "LoggingTools.h"

LoggingTools::LoggingTools()
{
    //ctor
}

LoggingTools::~LoggingTools()
{
    //dtor
}

LoggingTools::LevelStringMap LoggingTools::get_map()
{
    return LevelStringMap {
        {LogLevel_Debug, "DBG "},
        {LogLevel_Info, "INF "},
        {LogLevel_Warning, "WRN "},
        {LogLevel_Error, "ERR "}
    };
}

std::string LoggingTools::logToString(const LogLevel lvl)
{
    auto map = get_map();
    auto iter = map.find(lvl);
    if (iter != map.end()) {
        return iter->second;
    }

    return "    ";
}
