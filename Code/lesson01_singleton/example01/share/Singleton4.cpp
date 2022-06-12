#include "../include/Singleton4.h"

namespace single
{
    //在类外实现 - 构造函数
    Singleton4::Singleton4()
    {
        cout << "Singleton4()私有构造函数..." << endl;
    }

    //在类外实现 - 析构函数
    Singleton4::~Singleton4()
    {
        cout << "~Singleton4()析构函数,mInstance=" << mInstance << endl;
        // if(mInstance != NULL)
        // {
        //     delete mInstance;
        //     mInstance = NULL;
        // }
        cout << endl;
    }

    //释放内存
    void Singleton4::freeInstance()
    {
        cout << "freeInstances():: mInstance=" << mInstance << endl;
        if(mInstance != nullptr)
        {
            delete mInstance;
            mInstance = nullptr;
        }
    }

    void Singleton4::print()
    {
        cout << "print():: 线程安全的单例 ..." << endl;
    }

     /*
     * 双重检查锁定模式(DCLP)
     * 问题:因为c++编译器在编译过程中会对代码进行优化，
     * 所以实际的代码执行顺序可能被打乱，另外因为CPU有一级二级缓存(cache),
     * CPU的计算结果并不是及时更新到内存的,所以在多线程环境，
     * 不同线程间共享内存数据存在可见性问题，从而导致使用DCLP也存在风险。
     */
     //静态方法,获取单例
    Singleton4 * Singleton4::getInstance()
    {
        cout << "getInstance():: mInstance=" << mInstance << endl;
        if(mInstance == nullptr)  //第一次判断mInstance是否为空，线程不安全，可能多个线程同时判空
        {
            //mMutex.lock();//获取锁
            std::lock_guard<std::mutex> lock(mMutex);//自动上锁
            if(mInstance == nullptr)//第二次判空，加互斥锁，线程安全，保证只有一个线程来初始化Singleton
            {
                mInstance = new Singleton4();
            }
            //mMutex.unlock();
        }
        
        return mInstance;
    }

    
    /*
     * 借助（内存栅栏技术 memory fence）来解决双重检查锁定模式的风险
     * 利用C++11提供的atomic_thread_fence实现内存栅栏memory fence
     * 在c++11中，可以获取(acquire/consume)和释放(release)内存栅栏
     * 使用c++11中的atomic类型来包装m_instance指针，这使得对m_instance的操作是一个原子操作。
     */
    
    //在类外初始化静态属性
    Singleton4 * Singleton4::mInstance = nullptr;
    std::mutex Singleton4::mMutex;
}
