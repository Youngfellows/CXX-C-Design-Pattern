#include "../../include/product/OracleDBCommand.h"

/**
 * @brief 初始化父类
 * 
 * @param dbConn 数据库连接
 */
OracleDBCommand::OracleDBCommand(std::shared_ptr<DBConnection> dbConn) : DBCommand(dbConn)
{
    cout << "OracleDBCommand()有参数构造函数" << endl;
}

OracleDBCommand::~OracleDBCommand()
{
    cout << "~OracleDBCommand()析构函数" << endl;
}

bool OracleDBCommand::excute(string cmd)
{
    cout << "OracleDBCommand::excute():: ..." << endl;

    if(ORACLE != this->dbConn->type())
    {
        return false;
    }

    return this->dbConn->excute(cmd);
}