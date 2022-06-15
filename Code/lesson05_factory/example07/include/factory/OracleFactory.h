#ifndef ORACLE_FACTORY_H
#define ORACLE_FACTORY_H

#include "../IFactory.h"
#include "../product/OracleDBConnection.h"
#include "../product/OracleDBCommand.h"

/**
 * @brief 具体工厂: 生产Oracle产品族
 * 
 */
class OracleFactory : public IFactory
{
    public:
        OracleFactory();
        ~OracleFactory();
        virtual std::shared_ptr<DBConnection> createDBConnection() override;//覆写createDBConnection()函数
        virtual std::shared_ptr<DBCommand> createDBCommand(std::shared_ptr<DBConnection> dbConn) override;//覆写createDBCommand()函数
};
#endif