#ifndef LOGGER2_H
#define LOGGER2_H

#include <string>

#include <LoggingLevels.h>

class Logger2
{
    public:
        Logger2();
        virtual ~Logger2();

        void log(const std:: string str) const;

        void log(const LogLevel lvl, const std:: string str) const;

        void setLevel(const LogLevel lvl);

    private:
        LogLevel level;
};

#endif // LOGGER2_H
