#include "../include/Request.h"

Request::Request(string name,Level level,string content,int number)
{
    cout << "Request()有参数构造函数" << endl;
    this->name = name;
    this->level = level;
    this->content = content;
    this->number = number;
}

Request::~Request()
{
    cout << "~Request()析构函数" << endl;
}

Level Request::getRequestLevel()
{
    return this->level;
}

string Request::getContent()
{
    return this->content;
}

int Request::getNumber()
{
    return this->number;
}

string Request::getName()
{
    return this->name;
}
