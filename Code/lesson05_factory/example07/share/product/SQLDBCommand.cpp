#include "../../include/product/SQLDBCommand.h"

/**
 * @brief 初始化父类
 * 
 * @param dbConn 数据库连接
 */
SQLDBCommand::SQLDBCommand(std::shared_ptr<DBConnection> dbConn) : DBCommand(dbConn)
{
    cout << "SQLDBCommand()有参数构造函数" << endl;
}

SQLDBCommand::~SQLDBCommand()
{
    cout << "~SQLDBCommand()析构函数" << endl;
}

bool SQLDBCommand::excute(string cmd)
{
    cout << "SQLDBCommand::excute():: ..." << endl;

    if(SQL != this->dbConn->type())
    {
        return false;
    }

    return this->dbConn->excute(cmd);
}