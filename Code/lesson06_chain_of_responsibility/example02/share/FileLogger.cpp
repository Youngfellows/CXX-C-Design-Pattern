#include "../include/FileLogger.h"

FileLogger::FileLogger(LogLevel level)
{
    cout << "FileLogger()有参数构造函数" << endl;
    this->level = level;
}

FileLogger::~FileLogger()
{
    cout << "~FileLogger()析构函数" << endl;
}

/**
 * @brief 覆写write()函数,写日志
 * 
 * @param text 日志
 */
void FileLogger::write(string text)
{
    cout << "FileLogger::write():: text:" << text << endl;
}