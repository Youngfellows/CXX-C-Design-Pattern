#include "../include/Sample.h"

void test1()
{
    cout << "test1()::" << endl;
    //饿汉式单例
    Singleton1 *s1 = Singleton1::getInstance();
    Singleton1 *s2 = Singleton1::getInstance();
    cout << "s1地址:" << s1 << endl;
    cout << "s2地址:" << s2 << endl;

    if(s1 == s2)
    {
        cout << "同一个对象" << endl;
    }else
    {
        cout << "不是一个对象" << endl;
    }

    //调用单例方法
    s1->print();
    s2->print();

    //释放内存
    Singleton1::freeInstance();
}

void test2()
{
    cout << "test2()::" << endl;  
    //懒汉式单例
    Singleton2 *s1 = Singleton2::getInstance();
    Singleton2 *s2 = Singleton2::getInstance();
    cout << "s1地址:" << s1 << endl;
    cout << "s2地址:" << s2 << endl;

    if(s1 == s2)
    {
        cout << "同一个对象" << endl;
    }else
    {
        cout << "不是一个对象" << endl;
    }

    //调用单例方法
    s1->print();
    s2->print();

    //释放内存
    Singleton2::freeInstance();
}

void test3()
{
    cout << "test3()::" << endl;   
    //线程安全单例
    Singleton3 *s1 = Singleton3::getInstance();
    Singleton3 *s2 = Singleton3::getInstance();
    cout << "s1地址:" << s1 << endl;
    cout << "s2地址:" << s2 << endl;

    if(s1 == s2)
    {
        cout << "同一个对象" << endl;
    }else
    {
        cout << "不是一个对象" << endl;
    }

    //调用单例方法
    s1->print();
    s2->print();

    //释放内存
    Singleton3::freeInstance();
}

void test4()
{
    cout << "test4()::" << endl;
    //线程安全单例
    Singleton4 *s1 = Singleton4::getInstance();
    Singleton4 *s2 = Singleton4::getInstance();
    cout << "s1地址:" << s1 << endl;
    cout << "s2地址:" << s2 << endl;

    if(s1 == s2)
    {
        cout << "同一个对象" << endl;
    }else
    {
        cout << "不是一个对象" << endl;
    }

    //调用单例方法
    s1->print();
    s2->print();

    //释放内存
    Singleton4::freeInstance();
}

void test5()
{
    cout << "test5()::" << endl;
    //线程安全单例
    Singleton5 *s1 = Singleton5::getInstance();
    Singleton5 *s2 = Singleton5::getInstance();
    cout << "s1地址:" << s1 << endl;
    cout << "s2地址:" << s2 << endl;

    if(s1 == s2)
    {
        cout << "同一个对象" << endl;
    }else
    {
        cout << "不是一个对象" << endl;
    }

    //调用单例方法
    s1->print();
    s2->print();

    //释放内存
    Singleton5::freeInstance();
}

void test6()
{
    cout << "test6()::" << endl;
    //线程安全单例
    Singleton6 *s1 = Singleton6::getInstance();
    Singleton6 *s2 = Singleton6::getInstance();
    cout << "s1地址:" << s1 << endl;
    cout << "s2地址:" << s2 << endl;

    if(s1 == s2)
    {
        cout << "同一个对象" << endl;
    }else
    {
        cout << "不是一个对象" << endl;
    }

    //调用单例方法
    s1->print();
    s2->print();

    //释放内存
    Singleton5::freeInstance();
}
