#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //工厂方法模式,通过工厂生产苹果果
    AbsFruitFactory *factory = new AppleFactory();//生产苹果的工厂

    //生产苹果
    Fruit *fruit = factory->create();
    string name = fruit->fruit();//获取水果名称
    double price = fruit->price();//获取水果价格
    cout << "名称:" << name << ",价格:" << price << endl;

    //工厂方法模式,通过工厂生产香蕉
    factory = new BananaFactory();//生产香蕉的工厂

    fruit = factory->create();
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
    //通过工厂生产产品
    AbsOperationFactory *factory = new AddFactory();

    //加法
    Operation *operation = factory->create();
    operation->numberA = 12;
    operation->numberB = 3;
    double result = operation->getResult();//获取结果
    cout << "result:" << result << endl;

    //释放内存
    delete operation;
    delete factory;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //通过工厂生产产品
    AbsOperationFactory *factory = new SubFactory();

    //减法
    Operation *operation = factory->create();
    operation->numberA = 12;
    operation->numberB = 3;
    double result = operation->getResult();//获取结果
    cout << "result:" << result << endl;

    //释放内存
    delete operation;
    delete factory;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //通过工厂生产产品
    AbsOperationFactory *factory = new MulFactory();

    //乘法
    Operation *operation = factory->create();
    operation->numberA = 12;
    operation->numberB = 3;
    double result = operation->getResult();//获取结果
    cout << "result:" << result << endl;
    
    //释放内存
    delete operation;
    delete factory;
    cout << endl;
}

void test5()
{
    cout << "test5():: ..." << endl;
    //通过工厂生产产品
    AbsOperationFactory *factory = new DivFactory();

    //除法
    Operation *operation = factory->create();
    operation->numberA = 12;
    operation->numberB = 3;
    double result = operation->getResult();//获取结果
    cout << "result:" << result << endl;
    
    //释放内存
    delete operation;
    delete factory;
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