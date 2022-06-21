#include "../include/SubSystemA.h"

SubSystemA::SubSystemA()
{
    cout << "SubSystemA()构造函数" << endl; 
}

SubSystemA::~SubSystemA()
{
    cout << "~SubSystemA()析构函数" << endl; 
}

void SubSystemA::doThing()
{
    cout << "SubSystemA::doThing():: 做点什么事 ..." << endl;
}
