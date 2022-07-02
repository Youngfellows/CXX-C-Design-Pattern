#include "../include/XiaoNvBuilder.h"

XiaoNvBuilder::XiaoNvBuilder()
{
    cout << "XiaoNvBuilder()构造函数" << endl;
    this->product = std::make_shared<Product>();
}

XiaoNvBuilder::~XiaoNvBuilder()
{
    cout << "~XiaoNvBuilder()析构函数" << endl;
}

void XiaoNvBuilder::buildRiceNoddles()
{
    this->product->add("意大利面条");
}

void XiaoNvBuilder::buildCoolDish()
{
    this->product->add("景德镇磁盘");
}

void XiaoNvBuilder::buildDrink()
{
    this->product->add("果粒橙");
}

std::shared_ptr<Product> XiaoNvBuilder::getProdect()
{
    return this->product;
}