#ifndef SINGLETON6_H
#define SINGLETON6_H

#include "./Global.h"

//定义名称空间
namespace single
{
    //C++11单例模式 - 线程安全
    class Singleton6
    {
        private:
            //static Singleton6 *mInstance;//静态属性
            static std::atomic<Singleton6 *> mInstance;
            static std::mutex mMutex;

        private:
            Singleton6();//构造函数

        public:
            ~Singleton6();//析构函数
            static Singleton6 * getInstance();//获取单例
            static void freeInstance();//释放内存
            void print();//打印函数
    };
}

#endif