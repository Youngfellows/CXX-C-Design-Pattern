#include "../include/Deposit.h"

Deposit::Deposit()
{
    cout << "Deposit()构造函数" << endl;
}

Deposit::~Deposit()
{
    cout << "~Deposit()析构函数" << endl;
}

void Deposit::transact()
{
    cout << "存款 ..." << endl;
}