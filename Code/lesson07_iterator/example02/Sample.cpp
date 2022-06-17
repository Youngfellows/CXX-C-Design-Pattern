#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //迭代器模式,使用智能指针
    std::shared_ptr<Container<string>> container = std::make_shared<ConcreteContainer<string>>();
    // Container<string> *container = new ConcreteContainer<string>();

    //添加元素
    container->pushItem("张无忌");
    container->pushItem("周芷若");
    container->pushItem("赵敏");
    container->pushItem("令狐冲");

    //获取元素
    string name = (*container)[1];
    cout << "name:" << name << endl;

    //变量元素,获取迭代器
    Iterator<string> *iter = container->getIterator();
    for(iter->first(); !(iter->isEnd()); iter->next())
    {
        string ele = iter->curItem();
        cout << ele << " ";
    }
    cout << endl;
    cout << endl;

    //释放内存
    //delete container;
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