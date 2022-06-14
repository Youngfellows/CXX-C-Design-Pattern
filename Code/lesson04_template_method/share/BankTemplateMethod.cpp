#include "../include/BankTemplateMethod.h"

BankTemplateMethod::~BankTemplateMethod()
{
    cout << "~BankTemplateMethod()析构函数" << endl;
}

void BankTemplateMethod::takeNumber()
{
    cout << "排队取号" << endl;
}

void BankTemplateMethod::evalute()
{
    cout << "反馈评分" << endl;
}

/**
 * @brief 模板函数 - 银行业务办理流程处理好
 * 
 */
void BankTemplateMethod::process()
{
    this->takeNumber();
    this->transact();
    this->evalute();
}