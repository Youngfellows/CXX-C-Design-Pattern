#ifndef FORUM_ACCOUNT_H
#define FORUM_ACCOUNT_H

#include "../interface/IForumAccount.h"

/**
 * @brief 派生类: 论坛账户
 *
 */
class ForumAccount : public IForumAccount
{
private:
    std::string nickName; //昵称
    std::string email;    //邮箱
    IState *state;        //当前状态

public:
    ForumAccount(std::string nickName, std::string email);
    ~ForumAccount();
    virtual void setState(IState *state) override; //设置状态
    virtual IState *getState() override;           //获取状态
    virtual std::string getNickName() override;    //获取昵称
    virtual std::string getEmail() override;       //获取邮箱
    virtual void downloadFile(int score) override; //下载文件
    virtual void writeNote(int score) override;    //写评论
    virtual void replyNote(int score) override;    //回复评论
};
#endif