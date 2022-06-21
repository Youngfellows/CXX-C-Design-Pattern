#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //外观模式,使用智能指针,不需要手动释放内存
    std::shared_ptr<IShapeMaker> shapeMaker = std::make_shared<ShapeMaker>();
    //通过指针访问函数
    shapeMaker->drawCircle();
    shapeMaker->drawRectangle();
    shapeMaker->drawSquare();

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