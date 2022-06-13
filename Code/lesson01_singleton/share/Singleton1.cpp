#include "../include/Singleton1.h"

namespace single
{
    //在类外实现 - 构造函数
    Singleton1::Singleton1()
    {
        cout << "Singleton1()私有构造函数..." << endl;
    }

    //在类外实现 - 析构函数
    Singleton1::~Singleton1()
    {
        cout << "~Singleton1()析构函数,mInstance=" << mInstance << endl;
        // if(mInstance != NULL)
        // {
        //     delete mInstance;
        //     mInstance = NULL;
        // }
        cout << endl;
    }

    //释放内存
    void Singleton1::freeInstance()
    {
        cout << "freeInstances():: mInstance=" << mInstance << endl;
        if(mInstance != NULL)
        {
            delete mInstance;
            mInstance = NULL;
        }
    }

    void Singleton1::print()
    {
        cout << "print():: 饿汉式单例 ..." << endl;
    }

     //静态方法,获取单例
    Singleton1 * Singleton1::getInstance()
    {
        //cout << "mInstance=" << mInstance << endl;
        return mInstance;
    }

    
    //在类外初始化静态属性
    Singleton1 * Singleton1::mInstance = new Singleton1();

}
