#include "../include/Attachment.h"

Attachment::Attachment()
{
    cout << "Attachment()构造函数" << endl;   
}

Attachment::~Attachment()
{
    cout << "~Attachment()析构函数" << endl;   
}

void Attachment::setContent(string content)
{
    cout << "setContent():: ..." << endl;
    this->content = content;
}

string Attachment::getContent()
{
    cout << "getContent():: ..." << endl;
    return this->content;
}