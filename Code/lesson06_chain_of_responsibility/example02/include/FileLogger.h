#ifndef FILE_LOGGER_H
#define FILE_LOGGER_H

#include "./Logger.h"

/**
 * @brief 具体类: 文件日志
 * 
 */
class FileLogger : public Logger
{
    private:

    public:
        FileLogger(LogLevel level);
        ~FileLogger();
        virtual void write(string text) override;//覆写write()函数
};
#endif