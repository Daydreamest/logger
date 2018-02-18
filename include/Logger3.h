#ifndef LOGGER3_H
#define LOGGER3_H

#include <string>

#include <LoggingLevels.h>

class Logger3
{
    public:
        Logger3();
        virtual ~Logger3();

        void log(const std:: string str) const;

        void log(const LogLevel lvl, const std:: string str) const;

        void setLevel(const LogLevel lvl);

    private:
        LogLevel level;

        bool use_timestamp;

        const std::string getTimestamp() const;
};

#endif // LOGGER3_H
