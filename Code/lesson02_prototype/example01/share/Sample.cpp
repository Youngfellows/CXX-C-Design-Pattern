#include "../include/Sample.h"

//在文件外实现接口函数
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存 - 原型模式
    Resume *r1 = new Resume("张无忌");
    //通过指针调用函数
    r1->setInfo(22,"男");
    r1->setWorkExperience("2004~2007","武当派");
    r1->display();

    //克隆一个一模一样的对象出来
    IResume *r2 = r1->clone();
    r2->display();

    //释放内存
    delete r1;
    //delete r2;
}

//在文件外实现接口函数
void test2()
{
    cout << "test2():: ..." << endl;
}

//在文件外实现接口函数
void test3()
{
    cout << "test3():: ..." << endl;
}

//在文件外实现接口函数
void test4()
{
    cout << "test4():: ..." << endl;
}

//在文件外实现接口函数
void test5()
{
    cout << "test5():: ..." << endl;
}
