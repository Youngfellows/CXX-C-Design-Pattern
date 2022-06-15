#include "../include/CreateFactory.h"

CreateFactory::CreateFactory()
{
    cout << "CreateFactory()构造函数" << endl;
}

CreateFactory::~CreateFactory()
{
    cout << "~CreateFactory()析构函数" << endl;
}

/**
* @brief 静态方法: 根据工厂类型创建工厂
* 
* @param type 工厂类型
* @return std::unique_ptr<IFactory> 返回工厂的指针变量
*/
std::unique_ptr<IFactory> CreateFactory::createFactory(FactoryType type)
{
    std::unique_ptr<IFactory> factory = nullptr;
    switch(type)
    {
        case FactoryType::BENZ_FACTORY:
            factory = std::make_unique<BenzFactory>();
            break;
        case FactoryType::BMW_FACTORY:
            factory = std::make_unique<BmwFactory>();
            break;
        case FactoryType::AUDI_FACTORY:
            factory = std::make_unique<AudiFactory>();
            break;
    }
    return factory;
}
