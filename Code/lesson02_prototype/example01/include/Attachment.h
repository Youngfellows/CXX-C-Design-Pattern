#ifndef ATTACHMENT_H
#define ATTACHMENT_H

#include "./Global.h"

/**
 * @brief  邮件的附件
 * 
 */
class Attachment
{
    private:
       string content;//附件内容

    public:
        Attachment();
        ~Attachment();
        void setContent(string content);//设置附件内容
        string getContent();//获取附件内容
};
#endif