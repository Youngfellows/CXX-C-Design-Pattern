#include "../include/AA.h"

//在类外实现模板方法
template <typename T>
AA<T>::AA(T a, T b)
{
    this->a = a;
    this->b = b;
}

//在类外实现模板方法
template <typename T>
void AA<T>::printAA()
{
    cout << "a:" << a << " b:" << b << endl;
}

//类外实现函数时，加T的地方有 函数返回值，类名:: ，形参变量
template <typename T>
AA<T> AA<T>::operator+(AA<T> &tmp)
{
    AA tt(this->a + tmp.a, this->b + tmp.b);
    return tt;
}