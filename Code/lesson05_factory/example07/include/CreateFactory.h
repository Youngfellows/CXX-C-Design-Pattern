#ifndef CREATE_FACTORY_H
#define CREATE_FACTORY_H

#include "./FactoryType.h"
#include "./factory/SQLFactory.h"
#include "./factory/OracleFactory.h"

/**
 * @brief 创建工厂的静态类
 * 
 */
class CreateFactory
{
    public:
        CreateFactory();
        ~CreateFactory();
        /**
         * @brief 静态方法: 根据类型创建工厂
         * 
         * @param type 
         * @return std::unique_ptr<IFactory> 返回工厂的指针变量
         */
        static std::unique_ptr<IFactory> factory(FactoryType type);
};
#endif