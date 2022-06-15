#ifndef DBCOMMAND_H
#define DBCOMMAND_H

#include "./Global.h"
#include "./DBConnection.h"

/**
 * @brief 抽象类: 数据库命令
 * 
 */
class DBCommand
{
    protected:
        std::shared_ptr<DBConnection> dbConn;

    public:

        /**
         * @brief 带参数构造函数
         * 
         * @param dbConn 数据库连接
         */
        DBCommand(std::shared_ptr<DBConnection> dbConn);

        /**
         * @brief 析构函数
         * 
         */
        virtual ~DBCommand();

        /**
         * @brief 
         * 
         * @param cmd 
         * @return true 
         * @return false 
         */
        virtual bool excute(string cmd) = 0;
};

#endif