#include "../include/AbstractPerson.h"

/**
 * @brief 模板方法,调用子类实现的接口
 * 
 */
void AbstractPerson::show()
{
    string name = this->getName();
    cout << name << endl;
    cout << endl;
}