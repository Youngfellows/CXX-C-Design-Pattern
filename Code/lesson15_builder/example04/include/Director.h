#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "./IDirector.h"
#include "./IBuilder.h"

/**
 * @brief 派生类: 具体负责任
 *
 */
class Director : public IDirector
{
private:
    std::shared_ptr<IBuilder> builder = nullptr;

public:
    Director(std::shared_ptr<IBuilder> builder);
    ~Director();
    virtual std::shared_ptr<Product> construct() override; //实现construct()函数
};
#endif