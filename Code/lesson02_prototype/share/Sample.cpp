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
    Resume *r2 = r1->clone();
    r2->setWorkExperience("2007~2010","光明顶");
    r2->display();

    //释放内存
    delete r1;
    //delete r2;
}

//在文件外实现接口函数
void test2()
{
    cout << "test2():: ..." << endl;
    //创建对象,动态申请内存
    IAnimal *cat1 = new Cat("加菲猫");
    string name = cat1->getName();//通过指针调用函数
    cout << "name:" << name << endl;

    //克隆对象
    IAnimal *cat2 = cat1->clone();
    cat2->setName("波斯猫");
    name = cat2->getName();
    cout << "name:" << name << endl;

    //释放内存
    delete cat1;
    delete cat2;
    cout << endl;
}

//在文件外实现接口函数
void test3()
{
    cout << "test3():: ..." << endl;
    //创建对象,动态申请内存
    Email *email = new Email("最初的文案","最初的附件");
    email->display();

    //克隆对象
    Email *email2 = email->clone();
    email2->changeText("新文案");
    email2->changeAttachment("新的附件");
    email2->display();

    cout << "xxxxxxxxxxxxxxxx" << endl;
    email->display();

    //释放内存
    delete email;
    delete email2;
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
