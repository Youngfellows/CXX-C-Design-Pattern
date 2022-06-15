#include "../../include/factory/CircleFactory.h"

CircleFactory::CircleFactory()
{
    cout << "CircleFactory()构造函数" << endl;
}

CircleFactory::CircleFactory(float x,float y,float radius)
{
    cout << "CircleFactory()有参数构造函数" << endl;
    this->x = x;
    this->y = y;
    this->radius = radius;
}

CircleFactory::~CircleFactory()
{
    cout << "~CircleFactory()析构函数" << endl;
}

/**
 * @brief 工厂创建具体产品: 生产圆形
 * 
 * @return std::shared_ptr<IShape> 返回圆形的指针变量
 */
std::shared_ptr<IShape> CircleFactory::create()//覆写create()函数
{
    return std::make_shared<Circle>(this->x,this->y,this->radius);
}