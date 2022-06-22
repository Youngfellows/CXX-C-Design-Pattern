#include "../include/Tool.h"

Tool::Tool(string tool)
{
    cout << "Tool()构造函数" << endl;
    this->toolName = tool;
}

Tool::~Tool()
{
    cout << "~Tool()析构函数" << endl;
}