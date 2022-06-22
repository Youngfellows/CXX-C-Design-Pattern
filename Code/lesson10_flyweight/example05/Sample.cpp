#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //享元模式,使用单例对象
    BigCharFactory *factory = BigCharFactory::getInstance();
    for(int i = 1; i <= 20; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            std::shared_ptr<BigChar> bigchar = factory->getBigChar(i * j);
            cout << "i:" << i << ",j:" << j << ",order:" << (i * j) % 11 << endl;
            bigchar->show();
        }
    }
    //释放内存
    delete factory;
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