#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //外观模式
    assert(DataBase::GetInstance().getNameByEmail("").empty());
    PageMaker::GetInstance().makeWelcomePage("zhangsan@zhangsan.com");
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