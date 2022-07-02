#ifndef PRODUCT_H
#define PRODUCT_H

#include "./Global.h"

/**
 * @brief 实体类: 产品
 *
 */
class Product
{
private:
    std::shared_ptr<std::vector<std::string>> productNames = nullptr; //保存产品名称的容器

public:
    Product();
    ~Product();
    void add(const std::string &produceName);
    void show();
};
#endif