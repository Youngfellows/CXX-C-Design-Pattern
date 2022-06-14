#include "../include/Transfer.h"

Transfer::Transfer()
{
    cout << "Transfer()构造函数" << endl;
}

Transfer::~Transfer()
{
    cout << "~Transfer()析构函数" << endl;
}

void Transfer::transact()
{
    cout << "转账 ..." << endl;
}