#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //享元模式,创建对象,动态申请内存
    FlyWeightTeacherFactory * factory = new FlyWeightTeacherFactory();

    //通过指针访问函数
    Person *p1 = factory->getTeacher("1001");
    p1->printInfo();

    Person *p2 = factory->getTeacher("1002");
    p2->printInfo();

    //获取已经保存的对象列表
    Person *p3 = factory->getTeacher("1001");
    p3->printInfo();

    Person *p4 = factory->getTeacher("1002");
    p4->printInfo();

    //释放内存
    delete factory;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}