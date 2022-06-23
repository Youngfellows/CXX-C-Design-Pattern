#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //装饰器模式,使用智能指针
    std::shared_ptr<Shape> shape = std::make_shared<Circle>(3,3,4); //创建一个圆形
    shape = std::make_shared<RedShapeDecorator>(shape);//装饰图形

    //获取装饰后的图形信息
    shape->draw();//绘制
    double area_ = shape->area();//面积
    cout << "圆形的面积是: " << area_ << endl;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    std::shared_ptr<Shape> shape = std::make_shared<Rectangle>(12,6); //创建一个圆形
    shape = std::make_shared<RedShapeDecorator>(shape);//装饰图形

    //获取装饰后的图形信息
    shape->draw();//绘制
    double area_ = shape->area();//面积
    cout << "矩形的面积是: " << area_ << endl;
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