#include "../include/Singleton5.h"

namespace single
{
    //在类外实现 - 构造函数
    Singleton5::Singleton5()
    {
        cout << "Singleton5()私有构造函数..." << endl;
    }

    //在类外实现 - 析构函数
    Singleton5::~Singleton5()
    {
        cout << "~Singleton5()析构函数,mInstance=" << mInstance << endl;
        // if(mInstance != NULL)
        // {
        //     delete mInstance;
        //     mInstance = NULL;
        // }
        cout << endl;
    }

    //释放内存
    void Singleton5::freeInstance()
    {
        cout << "freeInstances():: mInstance=" << mInstance << endl;
        if(mInstance != nullptr)
        {
            delete mInstance;
            mInstance = nullptr;
        }
    }

    void Singleton5::print()
    {
        cout << "print():: 线程安全的单例 ..." << endl;
    }

     //静态方法,获取单例
    Singleton5 * Singleton5::getInstance()
    {
        cout << "getInstance():: mInstance=" << mInstance << endl;
        if(mInstance == nullptr)
        {
            //mMutex.lock();//获取锁
            //std::lock_guard<std::mutex> lock(mMutex);//自动上锁
            pthread_mutex_lock(&mMutex);
            if(mInstance == nullptr)
            {
                mInstance = new Singleton5();
            }
            //mMutex.unlock();
            pthread_mutex_unlock(&mMutex);
        }
        
        return mInstance;
    }

    
    //在类外初始化静态属性
    Singleton5 * Singleton5::mInstance = nullptr;
    pthread_mutex_t Singleton5::mMutex;
}
