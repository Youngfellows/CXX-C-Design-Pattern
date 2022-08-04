#ifndef BOOK_H
#define BOOK_H

#include "./AbsProduct.h"

/**
 * @brief 具体产品类: 书籍
 *
 */
class Book : public AbsProduct, public std::enable_shared_from_this<Book>
{
public:
    Book(std::string name, double price);
    ~Book();
    virtual void accept(std::shared_ptr<IVisitor> visitor) override;
};

#endif