#ifndef SQL_DB_COMMAND_H
#define SQL_DB_COMMAND_H

#include "../DBCommand.h"

/**
 * @brief 具体产品类: SQL数据库命令
 * 
 */
class SQLDBCommand : public DBCommand
{
    private:

    public:
        SQLDBCommand(std::shared_ptr<DBConnection> dbConn);
        ~SQLDBCommand();
        virtual bool excute(string cmd) override;//覆写excute()函数
};

#endif