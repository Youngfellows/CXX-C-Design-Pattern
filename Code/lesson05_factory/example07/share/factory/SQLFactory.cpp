#include "../../include/factory/SQLFactory.h"

SQLFactory::SQLFactory()
{
    cout << "SQLFactory()构造函数" << endl;
}

SQLFactory::~SQLFactory()
{
    cout << "~SQLFactory()析构函数" << endl;
}

//覆写createDBConnection()函数
std::shared_ptr<DBConnection> SQLFactory::createDBConnection()
{
    return std::make_shared<SQLDBConnection>();
}

//覆写createDBCommand()函数
std::shared_ptr<DBCommand> SQLFactory::createDBCommand(std::shared_ptr<DBConnection> dbConn)
{
    return std::make_shared<SQLDBCommand>(dbConn);
}