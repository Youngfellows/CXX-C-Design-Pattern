#include "../../include/factory/SquareFactory.h"

SquareFactory::SquareFactory()
{
    cout << "SquareFactory()构造函数" << endl;
}

SquareFactory::SquareFactory(float length)
{
    cout << "SquareFactory()有参数构造函数" << endl;
    this->length = length;
}

SquareFactory::~SquareFactory()
{
    cout << "~SquareFactory()析构函数" << endl;
}

/**
 * @brief 工厂创建具体产品: 生产正方形
 * 
 * @return std::shared_ptr<IShape> 返回圆形的指针变量
 */
std::shared_ptr<IShape> SquareFactory::create()//覆写create()函数
{
    return std::make_shared<Square>(this->length);
}