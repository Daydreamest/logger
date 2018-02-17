#ifndef LOGGER1_H
#define LOGGER1_H

#include <string>

class Logger1
{
    public:
        Logger1();
        virtual ~Logger1();

        void log(const std:: string str) const;
};

#endif // LOGGER1_H
