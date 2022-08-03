#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //访问者模式
    IVisitor *visitorA = new VisitorA("杨过");
    IVisitor *visitorB = new VisitorB("令狐冲");

    IParkElement *parkA = new ParkA("雨林溪谷");
    IParkElement *parkB = new ParkB("风筝广场");

    parkA->accept(visitorA);
    parkB->accept(visitorB);

    //释放内存
    delete visitorA;
    delete visitorB;
    delete parkA;
    delete parkB;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //访问者模式
    IParkElement *parkA = new ParkA("雨林溪谷");
    IParkElement *parkB = new ParkB("风筝广场");
    Park *park = new Park("莲花山公园");
    park->setParkElement(parkA);
    park->setParkElement(parkB);

    //整个公园 接受 管理者访问
    IVisitor *manager = new ManagerVisitor("东方不败");
    park->accept(manager);

    //释放内存
    delete parkA;
    delete parkB;
    delete park;
    delete manager;
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