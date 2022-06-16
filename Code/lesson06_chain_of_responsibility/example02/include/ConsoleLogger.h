#ifndef CONSOLE_LOGGER_H
#define CONSOLE_LOGGER_H

#include "./Logger.h"

/**
 * @brief 具体类: 控制台日志
 * 
 */
class ConsoleLogger : public Logger
{
    private:

    public:
        ConsoleLogger(LogLevel level);
        ~ConsoleLogger();
        virtual void write(string text) override;//覆写write()函数
};
#endif