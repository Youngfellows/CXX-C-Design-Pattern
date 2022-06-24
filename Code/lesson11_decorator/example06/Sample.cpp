#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //装饰者模式,创建对象,动态申请内存
    IDisplay *d1 = new StringDisplay("Hello");
    assert(d1->getRow(-1).empty());
    IDisplay *d2 = new SideBorder(d1, '#');
    IDisplay *d3 = new FullBorder(d2);

    
    d1->show();
    d2->show();
    d3->show();
    IDisplay *d4 = new SideBorder(new FullBorder(new FullBorder(new SideBorder(new FullBorder(new StringDisplay("Hello,World")), '*'))), '/');
    d4->show();

    delete d1;
    delete d4;
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