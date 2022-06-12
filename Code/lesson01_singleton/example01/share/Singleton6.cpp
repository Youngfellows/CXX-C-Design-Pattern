#include "../include/Singleton6.h"

namespace single
{
    //在类外实现 - 构造函数
    Singleton6::Singleton6()
    {
        cout << "Singleton6()私有构造函数..." << endl;
    }

    //在类外实现 - 析构函数
    Singleton6::~Singleton6()
    {
        cout << "~Singleton6()析构函数,mInstance=" << mInstance << endl;
        cout << endl;
    }

    //释放内存
    void Singleton6::freeInstance()
    {
        cout << "freeInstances():: mInstance=" << mInstance << endl;
        if(mInstance != nullptr)
        {
            delete mInstance;
            mInstance = nullptr;
        }
    }

    void Singleton6::print()
    {
        cout << "print():: 线程安全的单例 ..." << endl;
    }

    /*
     * 借助（内存栅栏技术 memory fence）来解决双重检查锁定模式的风险
     * 利用C++11提供的atomic_thread_fence实现内存栅栏memory fence
     * 在c++11中，可以获取(acquire/consume)和释放(release)内存栅栏
     * 使用c++11中的atomic类型来包装mInstance指针，这使得对mInstance的操作是一个原子操作。
     */
    Singleton6 * Singleton6::getInstance()
    {
        cout << "getInstance():: mInstance=" << mInstance << endl;
        Singleton6 *tmp = mInstance.load(std::memory_order_relaxed);
        std::atomic_thread_fence(std::memory_order_acquire);//获取内存fence
		if (nullptr == mInstance)
		{
			std::lock_guard<std::mutex> lock(mMutex);//获取锁
			tmp = mInstance.load(std::memory_order_relaxed);
			if (nullptr == mInstance)
			{
				tmp = new Singleton6();//创建对象
				std::atomic_thread_fence(std::memory_order_release);//释放内存fence
				mInstance.store(tmp, std::memory_order_relaxed);
			}
		}
		return tmp;
    }

    //在类外初始化静态属性
    //Singleton4 * Singleton4::mInstance = nullptr;
    std::atomic<Singleton6 *> Singleton6::mInstance;
    std::mutex Singleton6::mMutex;
}
