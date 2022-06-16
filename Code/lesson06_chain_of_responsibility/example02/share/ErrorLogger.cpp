#include "../include/ErrorLogger.h"

ErrorLogger::ErrorLogger(LogLevel level)
{
    cout << "ErrorLogger()有参数构造函数" << endl;
    this->level = level;
}

ErrorLogger::~ErrorLogger()
{
    cout << "~ErrorLogger()析构函数" << endl;
}

/**
 * @brief 覆写write()函数,写日志
 * 
 * @param text 日志
 */
void ErrorLogger::write(string text)
{
    cout << "ErrorLogger::write():: text:" << text << endl;
}