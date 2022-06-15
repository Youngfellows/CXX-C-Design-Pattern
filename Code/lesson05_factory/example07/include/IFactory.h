#ifndef IFACTORY_H
#define IFACTORY_H

#include "./Global.h"
#include "./DBConnection.h"
#include "./DBCommand.h"

/**
 * @brief 抽象工厂: 生产产品族
 * 
 */
class IFactory
{
    public:

       virtual ~IFactory();

       /**
        * @brief 生产产品: DBConnection数据库连接
        * 
        * @return std::unique_ptr<DBConnection> 返回数据库连接DBConnection的指针变量
        */
       virtual std::shared_ptr<DBConnection> createDBConnection() = 0;

       /**
        * @brief  生产产品: DBConnection数据库连接
        * 
        * @return std::unique_ptr<DBCommand> 返回数据库操作DBCommand的指针变量
        */
       virtual std::shared_ptr<DBCommand> createDBCommand(std::shared_ptr<DBConnection> dbConn) = 0;
};
#endif