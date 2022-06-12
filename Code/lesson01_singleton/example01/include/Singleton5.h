#ifndef SINGLETON5_H
#define SINGLETON5_H

#include "./Global.h"

//定义名称空间
namespace single
{
    //懒汉式单例模式 - 线程安全
    class Singleton5
    {
        private:
            static Singleton5 *mInstance;//静态属性

        private:
            Singleton5();//构造函数

        public:
            ~Singleton5();//析构函数
            static Singleton5 * getInstance();//获取单例
            static pthread_mutex_t mMutex;
            static void freeInstance();//释放内存
            void print();//打印函数
    };
}

#endif