#include "../../include/factory/RectangleFactory.h"

RectangleFactory::RectangleFactory()
{
    cout << "RectangleFactory()构造函数" << endl;
}

RectangleFactory::RectangleFactory(float width,float length)
{
    cout << "RectangleFactory()有参数构造函数" << endl;
    this->width = width;
    this->length = length;
}

RectangleFactory::~RectangleFactory()
{
    cout << "~RectangleFactory()析构函数" << endl;
}

/**
 * @brief 工厂创建具体产品: 生产矩形
 * 
 * @return std::shared_ptr<IShape> 返回圆形的指针变量
 */
std::shared_ptr<IShape> RectangleFactory::create()//覆写create()函数
{
    return std::make_shared<Rectangle>(this->width,this->length);
}