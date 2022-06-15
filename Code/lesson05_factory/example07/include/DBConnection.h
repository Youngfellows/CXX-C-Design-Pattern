#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include "./Global.h"

/**
 * @brief 抽象类: 数据库连接
 * 
 */
class DBConnection
{
    public:

        /**
         * @brief 析构函数
         * 
         */
        virtual ~DBConnection();

        /**
         * @brief 抽象函数: 数据库类型,纯虚函数,子类必须实现
         * 
         * @return string 返回数据库类型
         */
        virtual string type() = 0;
        
        /**
         * @brief 执行sql语句
         * 
         * @param sql sql语句
         * @return true 执行sql成功
         * @return false 执行sql失败
         */
        virtual bool excute(string sql) = 0;

};

#endif