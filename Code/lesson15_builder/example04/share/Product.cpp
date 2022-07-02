#include "../include/Product.h"

Product::Product()
{
    cout << "Product()构造函数" << endl;
    this->productNames = std::make_shared<std::vector<std::string>>();
    this->productNames->clear();
}

Product::~Product()
{
    cout << "~Product()构造函数" << endl;
    if (!this->productNames->empty())
    {
        this->productNames->clear();
    }
}

void Product::add(const std::string &produceName)
{
    this->productNames->emplace_back(produceName);
}

void Product::show()
{
    cout << "Product::show():: ...." << endl;
    auto iter = this->productNames->begin();
    while (iter != this->productNames->end())
    {
        auto &name = *iter;
        cout << name << endl;
        iter++;
    }
}