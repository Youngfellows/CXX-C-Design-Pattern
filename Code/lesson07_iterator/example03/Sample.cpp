#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    AA<int> tmp(5, 6);
    AA<int> tmp1(5, 7);
    AA<int> tmp2 = tmp1 + tmp;
    tmp2.printAA();
    //cout << tmp2 << endl;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}