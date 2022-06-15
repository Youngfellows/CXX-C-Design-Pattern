#ifndef SQL_FACTORY_H
#define SQL_FACTORY_H

#include "../IFactory.h"
#include "../product/SQLDBConnection.h"
#include "../product/SQLDBCommand.h"

/**
 * @brief 具体工厂: 生产SQL产品族
 * 
 */
class SQLFactory : public IFactory
{
    public:
        SQLFactory();
        ~SQLFactory();
        virtual std::shared_ptr<DBConnection> createDBConnection() override;//覆写createDBConnection()函数
        virtual std::shared_ptr<DBCommand> createDBCommand(std::shared_ptr<DBConnection> dbConn) override;//覆写createDBCommand()函数
};
#endif