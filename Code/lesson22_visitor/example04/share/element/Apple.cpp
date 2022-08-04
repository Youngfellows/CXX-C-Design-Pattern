#include "../../include/element/Apple.h"

Apple::Apple(std::string name, double price) : AbsProduct(name, price)
{
    cout << "Apple()构造函数" << endl;
}

Apple::~Apple()
{
    cout << "~Apple()析构函数" << endl;
}

void Apple::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visitPartApple(shared_from_this());
}
