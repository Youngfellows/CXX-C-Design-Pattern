#include "../include/Singleton2.h"

namespace single
{
    //在类外实现 - 构造函数
    Singleton2::Singleton2()
    {
        cout << "Singleton2()私有构造函数..." << endl;
    }

    //在类外实现 - 析构函数
    Singleton2::~Singleton2()
    {
        cout << "~Singleton2()析构函数,mInstance=" << mInstance << endl;
        // if(mInstance != NULL)
        // {
        //     delete mInstance;
        //     mInstance = NULL;
        // }
        cout << endl;
    }

    //释放内存
    void Singleton2::freeInstance()
    {
        cout << "freeInstances():: mInstance=" << mInstance << endl;
        if(mInstance != NULL)
        {
            delete mInstance;
            mInstance = NULL;
        }
    }

    void Singleton2::print()
    {
        cout << "print():: 懒汉式单例 ..." << endl;
    }

     //静态方法,获取单例
    Singleton2 * Singleton2::getInstance()
    {
        cout << "getInstance():: mInstance=" << mInstance << endl;
        if(mInstance == NULL)
        {
            mInstance = new Singleton2();
        }
        
        return mInstance;
    }

    
    //在类外初始化静态属性
    Singleton2 * Singleton2::mInstance = NULL;

}
