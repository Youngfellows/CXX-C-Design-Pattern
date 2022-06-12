#include "../include/Singleton3.h"

namespace single
{
    //在类外实现 - 构造函数
    Singleton3::Singleton3()
    {
        cout << "Singleton3()私有构造函数..." << endl;
    }

    //在类外实现 - 析构函数
    Singleton3::~Singleton3()
    {
        cout << "~Singleton3()析构函数,mInstance=" << mInstance << endl;
        // if(mInstance != NULL)
        // {
        //     delete mInstance;
        //     mInstance = NULL;
        // }
        cout << endl;
    }

    //释放内存
    void Singleton3::freeInstance()
    {
        cout << "freeInstances():: mInstance=" << mInstance << endl;
        if(mInstance != NULL)
        {
            delete mInstance;
            mInstance = NULL;
        }
    }

    void Singleton3::print()
    {
        cout << "print():: 线程安全的单例 ..." << endl;
    }

     //静态方法,获取单例
    Singleton3 * Singleton3::getInstance()
    {
        cout << "getInstance():: mInstance=" << mInstance << endl;
        if(mInstance == NULL)
        {
            mMutex.lock();//获取锁
            if(mInstance == NULL)
            {
                mInstance = new Singleton3();
            }
            mMutex.unlock();
        }
        
        return mInstance;
    }

    
    //在类外初始化静态属性
    Singleton3 * Singleton3::mInstance = NULL;
    std::mutex Singleton3::mMutex;
}
