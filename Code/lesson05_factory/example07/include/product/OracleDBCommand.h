#ifndef ORACLE_DB_COMMAND_H
#define ORACLE_DB_COMMAND_H

#include "../DBCommand.h"

/**
 * @brief 具体产品类: Oracle数据库命令
 * 
 */
class OracleDBCommand : public DBCommand
{
    private:

    public:
        OracleDBCommand(std::shared_ptr<DBConnection> dbConn);
        ~OracleDBCommand();
        virtual bool excute(string cmd) override;//覆写excute()函数
};

#endif