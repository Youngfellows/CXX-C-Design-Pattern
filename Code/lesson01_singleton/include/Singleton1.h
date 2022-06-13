#ifndef SINGLETON1_H
#define SINGLETON1_H

#include "./Global.h"

//定义名称空间
namespace single
{
    //饿汉式单例模式
    class Singleton1
    {
        private:
            static Singleton1 *mInstance;//静态属性

        private:
            Singleton1();//构造函数

        public:
            static Singleton1 * getInstance();//获取单例
            ~Singleton1();//析构函数
            static void freeInstance();//释放内存
            void print();//打印函数
    };
}

#endif