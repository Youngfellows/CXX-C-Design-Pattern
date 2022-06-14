#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
     //模板方法模式
    //创建对象,动态申请内存
    Jeep *jeep = new Jeep();
    jeep->make();

    Mercedes *mercedes = new Mercedes();
    mercedes->make();

    cout << endl;
    //释放内存
    delete jeep;
    delete mercedes;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //模板方法模式
    //创建对象,动态申请内存
    Student *stu = new Student(1001,"张无忌");
    stu->show();

    Teacher *teacher = new Teacher(1002,"张三丰",8888.8);
    teacher->show();

    cout << endl;
    //释放内存
    delete stu;
    delete teacher;
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

void test5()
{
    cout << "test5():: ..." << endl;
    cout << endl;
}