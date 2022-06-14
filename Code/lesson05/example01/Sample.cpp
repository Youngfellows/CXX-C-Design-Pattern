#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //通过工厂生产水果
    AbsFruitFactory *factory = new FruitFactory();

    //生产苹果
    Fruit *fruit = factory->create(APPLE);
    string name = fruit->fruit();//获取水果名称
    double price = fruit->price();//获取水果价格
    cout << "名称:" << name << ",价格:" << price << endl;

    //生产香蕉
    fruit = factory->create(BANANA);
    name = fruit->fruit();//获取水果名称
    price = fruit->price();//获取水果价格
    cout << "名称:" << name << ",价格:" << price << endl;

    cout << endl;
    //释放内存
    delete factory;
    delete fruit;
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

void test5()
{
    cout << "test5():: ..." << endl;
    cout << endl;
}

void test6()
{
    cout << "test6():: ..." << endl;
    cout << endl;
}

void test7()
{
    cout << "test7():: ..." << endl;
    cout << endl;
}


void test8()
{
    cout << "test8():: ..." << endl;
    cout << endl;
}

void test9()
{
    cout << "test9():: ..." << endl;
    cout << endl;
}