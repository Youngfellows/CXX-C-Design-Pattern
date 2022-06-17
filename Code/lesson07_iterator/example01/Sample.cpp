#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //使用迭代器模式
    //创建容器,使用智能指针
    std::shared_ptr<Container> container = std::make_shared<ContreteContainer>();

    //添加元素
    container->add(std::make_shared<Object>(99)); 
    container->add(std::make_shared<Object>(66)); 
    container->add(std::make_shared<Object>(88)); 
    container->add(std::make_shared<Object>(77)); 
    container->add(std::make_shared<Object>(55)); 

    //变量元素,使用迭代器
    std::shared_ptr<Iterator> iter = container->createIterator();
    for(iter->first(); !(iter->isEnd()); iter->next())
    {
        //获取元素
        std::shared_ptr<Object> ele = iter->get();
        cout << *ele << " ";
    }
    cout << endl;
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