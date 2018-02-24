#include <Logger1.h>
#include <Logger2.h>
#include <Logger3.h>
#include <Logger4.h>

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

    // As above plus timestamp
    Logger3 logger3;
    logger3.log("Logger3 test A");
    logger3.setLevel(LogLevel_Warning);
    logger3.log("Logger3 test B");

    // Better timestamp
    Logger4 logger4;
    logger4.log("Logger4 test A");
    logger4.setLevel(LogLevel_Debug);
    logger4.log("Logger4 test B");

    return 0;
}
