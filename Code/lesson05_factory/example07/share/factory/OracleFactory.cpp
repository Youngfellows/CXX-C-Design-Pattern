#include "../../include/factory/OracleFactory.h"

OracleFactory::OracleFactory()
{
    cout << "OracleFactory()构造函数" << endl;
}

OracleFactory::~OracleFactory()
{
    cout << "~OracleFactory()析构函数" << endl;
}

//覆写createDBConnection()函数
std::shared_ptr<DBConnection> OracleFactory::createDBConnection()
{
    return std::make_shared<OracleDBConnection>();
}

//覆写createDBCommand()函数
std::shared_ptr<DBCommand> OracleFactory::createDBCommand(std::shared_ptr<DBConnection> dbConn)
{
    return std::make_shared<OracleDBCommand>(dbConn);
}