#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    IPerson *person = new Person();
    person->moveOn();

    person->onKeyDown();
    person->moveOn();

    person->onKeyDown();
    person->moveOn();

    person->onKeyDown();
    person->moveOn();

    person->onKeyUp();
    person->moveOn();

    person->onKeyUp();
    person->moveOn();
    
    person->onKeyUp();
    person->moveOn();

    //释放内存
    delete person;
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