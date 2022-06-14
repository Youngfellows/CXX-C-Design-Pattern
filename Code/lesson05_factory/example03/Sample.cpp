#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //抽象工厂模式,通过工厂生产水果族
    AbsFruitFactory *factory = new NorthFactory();//生产苹果的工厂

    //生产北方苹果
    Fruit *apple = factory->createApple();
    string name = apple->fruit();//获取水果名称
    double price = apple->price();//获取水果价格
    cout << "名称:" << name << ",价格:" << price << endl;

    //生产北方苹果
    Fruit *banana = factory->createBanana();
    name = banana->fruit();//获取水果名称
    price = banana->price();//获取水果价格
    cout << "名称:" << name << ",价格:" << price << endl;

    cout << endl;
    //释放内存
    delete factory;
    delete apple;
    delete banana;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //抽象工厂模式,通过工厂生产水果族
    AbsFruitFactory *factory = new SourthFactory();//生产苹果的工厂

    //生产南方苹果
    Fruit *apple = factory->createApple();
    string name = apple->fruit();//获取水果名称
    double price = apple->price();//获取水果价格
    cout << "名称:" << name << ",价格:" << price << endl;

    //生产南方苹果
    Fruit *banana = factory->createBanana();
    name = banana->fruit();//获取水果名称
    price = banana->price();//获取水果价格
    cout << "名称:" << name << ",价格:" << price << endl;

    cout << endl;
    //释放内存
    delete factory;
    delete apple;
    delete banana;
}