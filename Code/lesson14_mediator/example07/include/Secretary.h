#ifndef SECRETARY_H
#define SECRETARY_H

#include "./IColleague.h"

/**
 * @brief 派生类: 团支书
 * 
 */
class Secretary : public IColleague
{
public:
    Secretary(std::string name);
    ~Secretary();
    virtual void talk() override;                   //实现talk()函数
    virtual void receive(std::string msg) override; //实现receive(函数)
};
#endif