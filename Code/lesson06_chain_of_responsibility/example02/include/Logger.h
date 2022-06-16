#ifndef LOGGER_H
#define LOGGER_H

#include "./Global.h"
#include "./LogLevel.h"

/**
 * @brief 抽象类: 记录日志
 * 
 */
class Logger
{
    protected:
        LogLevel level;//日志级别
        std::shared_ptr<Logger> nextLogger = nullptr;//下一个处理单元

    public:
        /**
         * @brief 析构函数
         * 
         */
        virtual ~Logger();

        /**
         * @brief 设置下一个处理单元
         * 
         * @param next 下一个处理单元
         */
        void setNextLogger(std::shared_ptr<Logger> next);

        /**
         * @brief 根据级别写日志
         * 
         * @param level log级别
         * @param msg 日志
         */
        void logMessage(LogLevel level,string msg);

        /**
         * @brief 写日志
         * 
         * @param text 日志
         */
        virtual void write(string text) = 0;  
};

#endif