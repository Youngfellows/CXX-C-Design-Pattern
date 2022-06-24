#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //装饰者模式,创建对象,动态申请内存
    Canvas *cvs = new RedCanvas();
    //没有装饰的
    cvs->draw();

    //装饰一些
    cvs = new BorderCanvasDecorator(cvs);
    cvs = new FrameCanvasDecorator(cvs);
    cvs->draw();

    //释放内存
    delete cvs;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
     //装饰者模式,创建对象,动态申请内存
    Canvas *cvs = new BlueCanvas();
    //没有装饰的
    cvs->draw();

    //装饰一些
    cvs = new BorderCanvasDecorator(cvs);
    cvs = new FrameCanvasDecorator(cvs);
    cvs->draw();

    //释放内存
    delete cvs;
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