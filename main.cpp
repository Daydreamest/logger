#include <Logger1.h>
#include <Logger2.h>
#include <Logger3.h>

int main()
{
    // Simple cout logging
    Logger1 logger1;
    logger1.log("Logger 1 test");

    // Simple cout logging with log levels
    Logger2 logger2;
    logger2.log("Logger2 test A");
    logger2.setLevel(LogLevel_Info);
    logger2.log("Logger2 test B");

    // Simple cout logging with log levels and timestamp
    Logger3 logger3;
    logger3.log("Logger3 test A");
    logger3.setLevel(LogLevel_Warning);
    logger3.log("Logger3 test B");

    return 0;
}
