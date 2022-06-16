#ifndef REQUEST_H
#define REQUEST_H

#include "./Global.h"
#include "./Level.h"

/**
 * @brief 请求
 * 
 */
class Request
{
    private:
        Level level;//请求级别
        string content;//请求内容
        int number;//请求数量
        string name;//姓名
    public:
        Request(string name,Level level,string content,int number);
        ~Request();
        Level getRequestLevel();
        string getContent();
        int getNumber();
        string getName();
};
#endif