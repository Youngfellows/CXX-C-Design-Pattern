#include "../include/Iterator.h"

//在类外实现模板类的模板方法
template <typename Item>
Iterator<Item>::~Iterator()
{
    cout << "~Iterator()析构函数" << endl;
}
