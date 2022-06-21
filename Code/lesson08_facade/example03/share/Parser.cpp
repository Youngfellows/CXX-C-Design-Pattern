#include "../include/Parser.h"

Parser::Parser()
{
    cout << "Parser()构造函数" << endl;
}

Parser::~Parser()
{
    cout << "~Parser()析构函数" << endl;
}

void Parser::parse()
{
    cout << "Parser::parse():: 语法分析 ..." << endl;
}