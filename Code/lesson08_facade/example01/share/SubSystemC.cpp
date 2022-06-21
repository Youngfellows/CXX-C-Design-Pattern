#include "../include/SubSystemC.h"

SubSystemC::SubSystemC()
{
    cout << "SubSystemC()构造函数" << endl; 
}

SubSystemC::~SubSystemC()
{
    cout << "~SubSystemC()析构函数" << endl; 
}

void SubSystemC::doThing()
{
    cout << "SubSystemC::doThing():: 做点什么事 ..." << endl;
}
