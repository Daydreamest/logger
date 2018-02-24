#ifndef LOGGER4_H
#define LOGGER4_H

#include <string>

#include <LoggingLevels.h>

class Logger4
{
    public:
        Logger4();
        virtual ~Logger4();

        void log(const std:: string str) const;

        void log(const LogLevel lvl, const std:: string str) const;

        void setLevel(const LogLevel lvl);

    private:
        LogLevel level;

        bool use_timestamp;

        const std::string getTimestamp() const;

        const std::string normalize(const int i) const;
};

#endif // LOGGER4_H
