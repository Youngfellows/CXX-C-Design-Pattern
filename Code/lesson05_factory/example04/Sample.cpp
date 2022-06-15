#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //工厂方法模式
    //使用智能指针
    //std::shared_ptr<IShapeFactory> factory = std::make_shared<CircleFactory>();
    std::shared_ptr<IShapeFactory> factory = std::make_shared<CircleFactory>(3,4,2);
    std::shared_ptr<IShape> shape;

    //工厂生产产品
    shape = factory->create();

    //调用产品的函数
    shape->draw();
    double cArea = shape->area();//求面积
    cout << "cArea:" << cArea << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //工厂方法模式
    //使用智能指针
    std::shared_ptr<IShapeFactory> factory = std::make_shared<RectangleFactory>(5,6);
    std::shared_ptr<IShape> shape;

    //工厂生产产品
    shape = factory->create();

    //调用产品的函数
    shape->draw();
    double cArea = shape->area();//求面积
    cout << "cArea:" << cArea << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //工厂方法模式
    //使用智能指针
    std::shared_ptr<IShapeFactory> factory = std::make_shared<SquareFactory>(7);
    std::shared_ptr<IShape> shape;

    //工厂生产产品
    shape = factory->create();

    //调用产品的函数
    shape->draw();
    double cArea = shape->area();//求面积
    cout << "cArea:" << cArea << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}