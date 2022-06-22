#include "../include/FlyweightFactory.h"

//在类外初始化静态属性
TreeFactory* TreeFactory::instance_ = nullptr;
std::mutex TreeFactory::mutex_;