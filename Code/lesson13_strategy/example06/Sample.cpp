#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //策略模式,使用工厂生产具体的武器产品
    std::unique_ptr<WeaponFactory> factory = std::make_unique<AK47Factory>();//创建生产武器的工厂
    std::unique_ptr<Character> client = std::make_unique<king>();//创建客户端

    //设置工厂给客户端
    client->setWeaponFactory(std::move(factory));
    
    //通过客户端访问具体武器方法
    client->fight();


    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //策略模式,使用工厂生产具体的武器产品
    std::unique_ptr<WeaponFactory> factory = std::make_unique<AK47Factory>();//创建生产武器的工厂
    std::unique_ptr<Character> client = std::make_unique<king>(std::move(factory));//创建客户端

    //设置工厂给客户端
    //client->setWeaponFactory(std::move(factory));
    
    //通过客户端访问具体武器方法
    client->fight();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //策略模式,使用工厂生产具体的武器产品
    std::unique_ptr<WeaponFactory> factory = std::make_unique<KnifeFactory>();//创建生产武器的工厂
    std::unique_ptr<Character> client = std::make_unique<king>();//创建客户端

    //设置工厂给客户端
    client->setWeaponFactory(std::move(factory));
    
    //通过客户端访问具体武器方法
    client->fight();

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}