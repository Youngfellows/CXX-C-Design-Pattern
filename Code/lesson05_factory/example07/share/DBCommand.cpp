#include "../include/DBCommand.h"

DBCommand::DBCommand(std::shared_ptr<DBConnection> dbConn)
{
    cout << "DBCommand::DBCommand()有参数构造函数" << endl;
    this->dbConn = dbConn;
}

DBCommand::~DBCommand()
{
    cout << "~DBCommand()析构函数" << endl;
}
