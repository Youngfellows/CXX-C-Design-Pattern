#include "./include/Sample.h"

static std::string colors[] = {"Red", "Green", "Blue", "White", "Black"};
static std::string& GetRandomColor() { return colors[(int)(random(sizeof(colors) / sizeof(colors[0])))]; }
static int GetRandomX() { return (int)random(100); }
static int GetRandomY() { return (int)random(100); }

void test1()
{
    cout << "test1():: ..." << endl;
    //享元模式
    for (int i = 0; i < 1000; ++i) {
        std::shared_ptr<Circle> circle = ShapeFactory::getCircle1(GetRandomColor());
        circle->setX(GetRandomX());
        circle->setY(GetRandomY());
        circle->setRadius(100);
        circle->draw();
    }
    cout << "===============================================" << endl;
    for (int i = 0; i < 1000; ++i) {
        std::shared_ptr<Circle> circle = ShapeFactory::getCircle2(GetRandomColor());
        circle->setX(GetRandomX());
        circle->setY(GetRandomY());
        circle->setRadius(100);
        circle->draw();
    }   
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //std::shared_ptr<Circle> circle = std::make_shared<Circle>("白色");
    // circle->setX(1.5);
    // circle->setY(2.8);
    // circle->setRadius(7);
    // circle->draw();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    // Circle * circle = new Circle("白色");

    //释放内存
    // delete circle;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}