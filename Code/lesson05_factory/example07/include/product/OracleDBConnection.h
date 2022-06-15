#ifndef ORACLE_DB_CONNECTION_H
#define ORACLE_DB_CONNECTION_H

#include "../DBConnection.h"

/**
 * @brief 具体产品类: Oracle数据库连接
 * 
 */
class OracleDBConnection : public DBConnection
{
    private:
       
    public:
        OracleDBConnection();
        ~OracleDBConnection();
        virtual string type() override;//覆写type()函数
        virtual bool excute(string sql) override;//覆写excute()函数
};
#endif