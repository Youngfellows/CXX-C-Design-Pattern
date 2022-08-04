#include "../../include/visitor/Saler.h"

Saler::Saler(std::string name) : AbsVisitor(name)
{
    cout << "Saler()构造函数" << endl;
}

Saler::~Saler()
{
    cout << "~Saler()析构函数" << endl;
}

void Saler::visitPartApple(std::shared_ptr<IProduct> apple)
{
    cout << "Saler::visitPartApple():: 收银员:" << this->name << ",给苹果称称重量,然后计算价格 ..." << endl;
    cout << "Saler::visitPartApple():: 苹果名称:" << apple->productName() << ",单价:" << apple->productPrice() << endl;
}

void Saler::visitPartBook(std::shared_ptr<IProduct> book)
{
    cout << "Saler::visitPartApple():: 收银员:" << this->name << ",计算书籍的价格 ..." << endl;
    cout << "Saler::visitPartApple():: 书籍名称:" << book->productName() << ",单价:" << book->productPrice() << endl;
}