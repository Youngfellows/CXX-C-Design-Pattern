#include "../../include/product/SQLDBConnection.h"

SQLDBConnection::SQLDBConnection()
{
    cout << "SQLDBConnection()构造函数" << endl;
}

SQLDBConnection::~SQLDBConnection()
{
    cout << "~SQLDBConnection()析构函数" << endl;
}

//覆写type()函数
string SQLDBConnection::type()
{
    return SQL;
}

//覆写excute()函数
bool SQLDBConnection::excute(string sql)
{
    cout << "SQLDBConnection::excute():: 执行sql:" << sql << endl;
    return true;
}