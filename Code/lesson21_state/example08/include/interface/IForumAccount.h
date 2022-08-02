#ifndef IFORUM_ACCOUNT_H
#define IFORUM_ACCOUNT_H

#include "../Global.h"
#include "./IState.h"

//先声明类,后面再定义
class IState;

/**
 * @brief 抽象类: 论坛账户抽象类
 *
 */
class IForumAccount
{
public:
    virtual ~IForumAccount() = default;
    virtual void setState(std::shared_ptr<IState> state) = 0; //设置状态
    virtual std::shared_ptr<IState> getState() = 0;           //获取状态
    virtual std::string getNickName() = 0;                    //获取昵称
    virtual std::string getEmail() = 0;                       //获取邮箱
    virtual void downloadFile(int score) = 0;                 //下载文件
    virtual void writeNote(int score) = 0;                    //写评论
    virtual void replyNote(int score) = 0;                    //回复评论
};

#endif