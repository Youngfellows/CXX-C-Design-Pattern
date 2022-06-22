#ifndef FACTORY_H
#define FACTORY_H

#include "./Tool.h"

/**
 * @brief 抽象工厂: 生产产品
 * 
 */
class Factory
{
    public:
       virtual ~Factory() = default;
       
       /**
        * @brief 纯虚函数,抽象接口: 生产产品
        * 
        * @param tool 
        * @return std::shared_ptr<Tool> 
        */
       virtual std::shared_ptr<Tool> create(const string tool) = 0;
};
#endif