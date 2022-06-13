#ifndef EMAIL_H
#define EMAIL_H

#include "./Object.h"
#include "./Attachment.h"

/**
 * @brief 具体原型: 邮件类
 * 
 */
class Email : public Object
{
    private:
       string text;//邮件正文
       Attachment *attachment;//邮件附件

    public:
        Email();
        Email(string text,string attachmentContent);
        virtual ~Email();
        Email * clone() override;//克隆对象,重写抽象接口
        void changeText(string text);//更新邮件正文
        void changeAttachment(string attachmentContent);//更新附件
        void display();//显示信息
};
#endif