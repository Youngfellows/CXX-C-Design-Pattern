#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //享元模式
    Forest* forest = new Forest();
    // 在forest中种植很多棵树
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            double x = i;
            double y = j;
            // 树类型1: 红色的杉树
            forest->planTree(x, y, "杉树", "红色", "");
            // 树类型2: 绿色的榕树
            forest->planTree(x, y, "榕树", "绿色", "");
            // 树类型3: 白色的桦树
            forest->planTree(x, y, "桦树", "白色", "");
        }
    }
    forest->draw();

    //释放内存
    delete forest;
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