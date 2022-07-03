#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //桥接模式
    Paint *paint = new RedPaint();    //红色画笔
    Shape *shape = new Circle(paint); //形
    shape->show();                    //先上图形

    //释放内存
    delete paint;
    delete shape;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //桥接模式
    Paint *paint = new BluePaint();   //红色画笔
    Shape *shape = new Circle(paint); //圆形
    shape->show();                    //先上图形

    //释放内存
    delete paint;
    delete shape;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //桥接模式
    std::shared_ptr<Paint> paint = std::make_shared<RedPaint>();        //红色画笔
    std::shared_ptr<Shape> shape = std::make_shared<Rect>(paint.get()); //矩形
    shape->show();                                                      //显示图形

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //桥接模式
    std::shared_ptr<Paint> paint = std::make_shared<BluePaint>();       //蓝色画笔
    std::shared_ptr<Shape> shape = std::make_shared<Rect>(paint.get()); //矩形
    shape->show();                                                      //显示图形

    cout << endl;
}