#ifndef ABSTRACT_STATE_H
#define ABSTRACT_STATE_H

#include "../interface/IState.h"

/**
 * @brief 基类: 状态基类
 *
 */
class AbstractState : public IState
{
protected:
    IForumAccount *account; //论坛账户
    int point;              //积分
    std::string stateName;  //状态名称

public:
    AbstractState() = default;
    ~AbstractState() = default;
    virtual void setStateName(std::string name) override;     //设置状态名称
    virtual std::string getStateName() override;              //获取状态名称
    virtual void setPoint(int point) override;                //设置积分
    virtual int getPoint() override;                          //获取积分
    virtual void setAccount(IForumAccount *account) override; //设置账户
    virtual IForumAccount *getAccount() override;             //获取账户
    virtual void downloadFile(int score) override;            //下载文件
    virtual void writeNote(int score) override;               //写评论
    virtual void replyNote(int score) override;               //回复评论
};
#endif