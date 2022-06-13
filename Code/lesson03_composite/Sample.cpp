#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //组合模式 - 创建对象,动态申请内存
    Menu *menu1 = new CompositMenu("国内新闻");
    Menu *subMenu1 = new SubMenu("时事新闻");
    Menu *subMenu2 = new SubMenu("社会新闻");
    menu1->add(subMenu1);
    menu1->add(subMenu2);
    menu1->display();

    Menu *menu2 = new CompositMenu("国际新闻");
    Menu *subMenu21 = new SubMenu("国际要闻");
    Menu *subMenu22 = new SubMenu("环球视野");
    menu2->add(subMenu21);
    menu2->add(subMenu22);
    menu2->display();

    //释放内存
    delete menu1;
    delete menu2;
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

void test5()
{
    cout << "test5():: ..." << endl;
    cout << endl;
}

void test6()
{
    cout << "test6():: ..." << endl;
    cout << endl;
}

void test7()
{
    cout << "test7():: ..." << endl;
    cout << endl;
}

void test8()
{
    cout << "test8():: ..." << endl;
    cout << endl;
}

void test9()
{
    cout << "test9():: ..." << endl;
    cout << endl;
}