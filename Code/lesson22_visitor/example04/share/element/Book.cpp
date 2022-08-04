#include "../../include/element/Book.h"

Book::Book(std::string name, double price) : AbsProduct(name, price)
{
    cout << "Book()构造函数" << endl;
}

Book::~Book()
{
    cout << "~Book()析构函数" << endl;
}

void Book::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visitPartBook(shared_from_this());
}
