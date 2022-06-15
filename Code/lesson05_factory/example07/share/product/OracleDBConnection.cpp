#include "../../include/product/OracleDBConnection.h"

OracleDBConnection::OracleDBConnection()
{
    cout << "OracleDBConnection()构造函数" << endl;
}

OracleDBConnection::~OracleDBConnection()
{
    cout << "~OracleDBConnection()析构函数" << endl;
}

//覆写type()函数
string OracleDBConnection::type()
{
    return ORACLE;
}

//覆写excute()函数
bool OracleDBConnection::excute(string sql)
{
    cout << "OracleDBConnection::excute():: 执行sql:" << sql << endl;
    return true;
}