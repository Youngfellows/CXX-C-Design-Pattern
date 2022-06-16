#include "../include/ConsoleLogger.h"

ConsoleLogger::ConsoleLogger(LogLevel level)
{
    cout << "ConsoleLogger()有参数构造函数" << endl;
    this->level = level;
}

ConsoleLogger::~ConsoleLogger()
{
    cout << "~ConsoleLogger()析构函数" << endl;
}

/**
 * @brief 覆写write()函数,写日志
 * 
 * @param text 日志
 */
void ConsoleLogger::write(string text)
{
    cout << "ConsoleLogger::write():: text:" << text << endl;
}