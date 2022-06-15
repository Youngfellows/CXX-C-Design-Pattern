#ifndef SQL_DB_CONNECTION_H
#define SQL_DB_CONNECTION_H

#include "../DBConnection.h"

/**
 * @brief 具体产品类: SQL数据库连接
 * 
 */
class SQLDBConnection : public DBConnection
{
    private:
       
    public:
        SQLDBConnection();
        ~SQLDBConnection();
        virtual string type() override;//覆写type()函数
        virtual bool excute(string sql) override;//覆写excute()函数
};
#endif