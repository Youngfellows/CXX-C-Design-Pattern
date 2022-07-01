#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //建造者模式
    std::shared_ptr<House> House = std::make_shared<FlatHouse>("顺丰公寓");
    std::shared_ptr<Builder> builder = std::make_shared<FlatBuilder>();
   
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