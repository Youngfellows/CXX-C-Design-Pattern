#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //桥接模式
    std::shared_ptr<DrawCircleAPI> drawApi = std::make_shared<RedCircle>();    //绘制红色圆圈的API
    std::shared_ptr<Shape> shape = std::make_shared<Circle>(1, 2, 5, drawApi); //圆形
    shape->draw();                                                             //绘制红色的圆形

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //桥接模式
    std::shared_ptr<DrawCircleAPI> drawApi = std::make_shared<GreenCircle>();       //绘制绿色圆圈的API
    std::shared_ptr<Shape> shape = std::make_shared<Circle>(3.5, 4.7, 12, drawApi); //圆形
    shape->draw();                                                                  //绘制绿色的圆形
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