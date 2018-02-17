#ifndef LOGGINGTOOLS_H
#define LOGGINGTOOLS_H

#include <map>
#include <string>

#include <LoggingLevels.h>

class LoggingTools
{
    public:
        LoggingTools();
        virtual ~LoggingTools();

        static std::string logToString(const LogLevel lvl);

    private:
        // Translation map type definition
        using LevelStringMap = std::map<LogLevel, std::string>;

        // Translation map creator
        static LevelStringMap get_map();
};

#endif // LOGGINGTOOLS_H
