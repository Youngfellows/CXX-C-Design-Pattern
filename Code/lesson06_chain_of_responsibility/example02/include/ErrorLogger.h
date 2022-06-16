#ifndef ERROR_LOGGER_H
#define ERROR_LOGGER_H

#include "./Logger.h"

/**
 * @brief 具体类: 错误日志
 * 
 */
class ErrorLogger : public Logger
{
    private:

    public:
        ErrorLogger(LogLevel level);
        ~ErrorLogger();
        virtual void write(string text) override;//覆写write()函数
};
#endif