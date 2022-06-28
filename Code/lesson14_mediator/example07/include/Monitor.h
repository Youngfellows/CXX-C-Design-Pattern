#ifndef MONITOR_H
#define MONITOR_H

#include "./IColleague.h"

/**
 * @brief 派生类: 班长
 * 
 */
class Monitor : public IColleague
{
public:
    Monitor(std::string name);
    ~Monitor();
    virtual void talk() override;                   //实现talk()函数
    virtual void receive(std::string msg) override; //实现receive(函数)
};
#endif