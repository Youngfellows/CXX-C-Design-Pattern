#ifndef ISTATE_H
#define ISTATE_H

#include "../Global.h"
#include "./IForumAccount.h"

//先声明类,后面再定义
class IForumAccount;

/**
 * @brief 抽象类: 抽象状态类
 *
 */
class IState
{
public:
    virtual ~IState() = default;
    virtual void checkState() = 0;                       //检查状态
    virtual void setStateName(std::string name) = 0;     //设置状态名称
    virtual std::string getStateName() = 0;              //获取状态名称
    virtual void setPoint(int point) = 0;                //设置积分
    virtual int getPoint() = 0;                          //获取积分
    virtual void setAccount(IForumAccount *account) = 0; //设置账户
    virtual IForumAccount *getAccount() = 0;             //获取账户
    virtual void downloadFile(int score) = 0;            //下载文件
    virtual void writeNote(int score) = 0;               //写评论
    virtual void replyNote(int score) = 0;               //回复评论
};
#endif