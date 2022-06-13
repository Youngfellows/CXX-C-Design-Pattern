#include "../include/Email.h"

Email::Email()
{
    cout << "Email()构造函数" << endl;
}

Email::Email(string text,string attachmentContent)
{
    cout << "Email()有参数构造函数" << endl;
    this->text = text;
    this->attachment = new Attachment();//动态创建对象
    this->attachment->setContent(attachmentContent);//设置附件内容
}

Email::~Email()
{
    cout << "~Email()析构函数" << endl;
    if(this->attachment != nullptr)
    {
        delete this->attachment;
        this->attachment = nullptr;
    }
}

//克隆对象
Email * Email::clone()
{
    //深拷贝
    return new Email(this->text,this->attachment->getContent());
}

void Email::changeText(string text)//更新邮件正文
{
    this->text = text;
}

void Email::changeAttachment(string attachmentContent)//更新附件
{
    this->attachment->setContent(attachmentContent);
}


void Email::display()//显示信息
{
    cout << "display():: 查看邮件" << endl;
    cout << "正文:" << this->text << endl;
    cout << "附件:" << this->attachment->getContent() << endl;
    cout << endl;
}