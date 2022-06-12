#ifndef SINGLETON3_H
#define SINGLETON3_H

#include "./Global.h"

//定义名称空间
namespace single
{
    //懒汉式单例模式 - 线程非安全
    class Singleton3
    {
        private:
            static Singleton3 *mInstance;//静态属性

        private:
            Singleton3();//构造函数

        public:
            ~Singleton3();//析构函数
            static Singleton3 * getInstance();//获取单例
            static std::mutex mMutex;
            static void freeInstance();//释放内存
            void print();//打印函数
    };
}

#endif