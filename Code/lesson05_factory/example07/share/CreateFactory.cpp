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
* @brief 静态方法: 根据类型创建工厂
* 
* @param type 
* @return std::unique_ptr<IFactory> 返回工厂的指针变量
*/
std::unique_ptr<IFactory> CreateFactory::factory(FactoryType type)
{
    std::unique_ptr<IFactory> factory = nullptr;
    switch(type)
    {
        case FactoryType::SQL_FACTORY:
            factory = std::make_unique<SQLFactory>();
            break;
        case FactoryType::ORACLE_FACTORY:
            factory = std::make_unique<OracleFactory>();
            break;
    }
    return factory;
}
