#ifndef CCOLLEAGUE_H
#define CCOLLEAGUE_H

#include "./IColleague.h"

/**
 * @brief 派生类: 具体的同仁实现
 *
 */
class CColleague : public IColleague
{
private:
    int id;                        // ID号
    IMediator *mediator = nullptr; //中介者

public:
    CColleague(int id);
    ~CColleague();                                                      //默认析构函数
    virtual void receiveMsg(IColleague *sender, const std::string &msg) override; //实现receiveMsg()函数
    virtual void sendMsg(IColleague *receiver, const std::string &msg) override;  //实现sendMsg()函数
    virtual void setMediator(IMediator *mediator) override;                       //实现sendMsg()函数
    virtual int getId() override;                                                 //实现getId()函数
};

#endif