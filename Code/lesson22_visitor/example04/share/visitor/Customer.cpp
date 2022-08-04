#include "../../include/visitor/Customer.h"

Customer::Customer(std::string name) : AbsVisitor(name)
{
    cout << "Customer()构造函数" << endl;
}

Customer::~Customer()
{
    cout << "~Customer()析构函数" << endl;
}

void Customer::visitPartApple(std::shared_ptr<IProduct> apple)
{
    cout << "Customer::visitPartApple():: 顾客:" << this->name << ",挑选苹果 ..." << endl;
    cout << "Customer::visitPartApple():: 苹果名称:" << apple->productName() << ",单价:" << apple->productPrice() << endl;
}

void Customer::visitPartBook(std::shared_ptr<IProduct> book)
{
    cout << "Customer::visitPartApple():: 顾客:" << this->name << ",挑选书籍 ..." << endl;
    cout << "Customer::visitPartApple():: 书籍名称:" << book->productName() << ",单价:" << book->productPrice() << endl;
}