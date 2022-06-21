#include "../include/Scanner.h"

Scanner::Scanner()
{
    cout << "Scanner()构造函数" << endl;
}

Scanner::~Scanner()
{
    cout << "~Scanner()析构函数" << endl;
}

void Scanner::scan()
{
    cout << "Scanner::scan():: 词法分析 ..." << endl;
}
