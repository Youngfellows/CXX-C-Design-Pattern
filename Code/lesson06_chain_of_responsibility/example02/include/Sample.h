#ifndef SAMPLE_H
#define SAMPLE_H

#include "./Global.h"
#include "./Logger.h"
#include "./FileLogger.h"
#include "./ErrorLogger.h"
#include "./ConsoleLogger.h"

//定义接口
void test1();
void test2();
void test3();
void test4();

std::shared_ptr<Logger> getChainOfLoggers();

#endif