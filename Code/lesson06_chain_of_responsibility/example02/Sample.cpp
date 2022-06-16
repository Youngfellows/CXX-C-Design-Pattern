#include "./include/Sample.h"

std::shared_ptr<Logger> getChainOfLoggers()
{
    //通过智能指针创建责任链
    std::shared_ptr<Logger> errorLogger = std::make_shared<ErrorLogger>(LOG_ERROR);
    std::shared_ptr<Logger> fileLogger = std::make_shared<FileLogger>(LOG_DEBUG);
    std::shared_ptr<Logger> consoleLogger = std::make_shared<ConsoleLogger>(LOG_INFO);

    //设置下一个处理单元
    errorLogger->setNextLogger(fileLogger);
    fileLogger->setNextLogger(consoleLogger);
    consoleLogger->setNextLogger(nullptr);
    return errorLogger;
}

void test1()
{
    cout << "test1():: ..." << endl;
    //获取日志器
    std::shared_ptr<Logger> logger = getChainOfLoggers();

    //打印日志
    logger->logMessage(LOG_INFO,"这是 INFO 级别的日志");
    logger->logMessage(LOG_DEBUG,"这是 DEBUG 级别的日志");
    logger->logMessage(LOG_ERROR,"这是 ERROR 级别的日志");

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}