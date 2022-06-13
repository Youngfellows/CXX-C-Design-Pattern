#ifndef SINGLETON4_H
#define SINGLETON4_H

#include "./Global.h"

//定义名称空间
namespace single
{
    //懒汉式单例模式 - 线程安全
    class Singleton4
    {
        private:
            static Singleton4 *mInstance;//静态属性

        private:
            Singleton4();//构造函数

        public:
            ~Singleton4();//析构函数
            static Singleton4 * getInstance();//获取单例
            static std::mutex mMutex;
            static void freeInstance();//释放内存
            void print();//打印函数
    };
}

#endif