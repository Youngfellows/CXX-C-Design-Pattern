#include "../include/FrameCanvasDecorator.h"

/**
 * @brief 构造函数,并初始化被装饰对象
 * 
 * @param cvs 被装饰对象指针
 */
FrameCanvasDecorator::FrameCanvasDecorator(Canvas *cvs) : CanvasDecorator(cvs)
{
    cout << "FrameCanvasDecorator()构造函数" << endl;
}

void FrameCanvasDecorator::draw()
{
    cout << "FrameCanvasDecorator::draw():: ..." << endl;
    this->canvas->draw();//调用被装饰对象方法
    this->addedOperation();//调用特有方法
}

void FrameCanvasDecorator::addedOperation()
{
    cout << "BorderCanvasDecorator::addedOperation():: 添加画布框架..." << endl;
}