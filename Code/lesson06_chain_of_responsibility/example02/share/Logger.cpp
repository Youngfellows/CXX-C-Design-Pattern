#include "../include/Logger.h"

Logger::~Logger()
{
    cout << "~Logger()析构函数" << endl;
}

/**
 * @brief 设置下一个处理单元
 * 
 * @param next 下一个处理单元
 */
void Logger::setNextLogger(std::shared_ptr<Logger> next)
{
    cout << "Logger::nextLogger():: next:" << next << endl;
    this->nextLogger = next;
}

/**
 * @brief 根据级别写日志
 * 
 * @param level log级别
 * @param msg 日志
 */
void Logger::logMessage(LogLevel level,string msg)
{
    //cout << "Logger::logMessage():: level:" << level << ",this->level:" << this->level << ",nextLogger:" << this->nextLogger << endl;
    if(level >= this->level)
    {
        this->write(msg);//写日志
    }

    //调用下一个处理单元
    if(nullptr != this->nextLogger)
    {
        this->nextLogger->logMessage(level,msg);
    }
}