#include "../include/BorderCanvasDecorator.h"

/**
 * @brief 构造函数,并初始化被装饰对象
 * 
 * @param cvs 被装饰对象指针
 */
BorderCanvasDecorator::BorderCanvasDecorator(Canvas *cvs) : CanvasDecorator(cvs)
{
    cout << "BorderCanvasDecorator()构造函数" << endl;
}

void BorderCanvasDecorator::draw()
{
    cout << "BorderCanvasDecorator::draw():: ..." << endl;
    this->canvas->draw();//调用被装饰对象方法
    this->addedOperation();//调用特有方法
}

void BorderCanvasDecorator::addedOperation()
{
    cout << "BorderCanvasDecorator::addedOperation():: 添加边框 ..." << endl;
}