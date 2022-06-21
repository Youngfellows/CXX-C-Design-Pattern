#include "../include/SubSystemB.h"

SubSystemB::SubSystemB()
{
    cout << "SubSystemB()构造函数" << endl; 
}

SubSystemB::~SubSystemB()
{
    cout << "~SubSystemB()析构函数" << endl; 
}

void SubSystemB::doThing()
{
    cout << "SubSystemB::doThing():: 做点什么事 ..." << endl;
}
