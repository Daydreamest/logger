#include <Logger1.h>
#include <Logger2.h>

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

    return 0;
}
