#ifndef CREATE_FACTORY_H
#define CREATE_FACTORY_H

#include "./Global.h"
#include "./IFactory.h"
#include "./FactoryType.h"
#include "./factory/AudiFactory.h"
#include "./factory/BenzFactory.h"
#include "./factory/BmwFactory.h"

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
         * @brief 静态方法: 根据工厂类型创建工厂
         * 
         * @param type 工厂类型
         * @return std::unique_ptr<IFactory> 返回工厂的指针变量
         */
        static std::unique_ptr<IFactory> createFactory(FactoryType type);
};
#endif