#include "../include/Response.h"

Response::Response()
{
    cout << "Response()构造函数" << endl;
}

Response::Response(string text)
{
    cout << "Response()构造函数" << endl;
    this->text = text;
}

Response::~Response()
{
    cout << "~Response()析构函数" << endl;
}

string Response::response()
{
    return this->text;
}
