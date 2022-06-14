#include "../include/Withdraw.h"

Withdraw::Withdraw()
{
    cout << "Withdraw()构造函数" << endl;
}

Withdraw::~Withdraw()
{
    cout << "~Withdraw()析构函数" << endl;
}

void Withdraw::transact()
{
    cout << "取款 ..." << endl;
}