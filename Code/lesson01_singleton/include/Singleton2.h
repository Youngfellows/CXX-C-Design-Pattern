#ifndef SINGLETON2_H
#define SINGLETON2_H

#include "./Global.h"

//定义名称空间
namespace single
{
    //懒汉式单例模式 - 线程非安全
    class Singleton2
    {
        private:
            static Singleton2 *mInstance;//静态属性

        private:
            Singleton2();//构造函数

        public:
            static Singleton2 * getInstance();//获取单例
            ~Singleton2();//析构函数
            static void freeInstance();//释放内存
            void print();//打印函数
    };
}

#endif