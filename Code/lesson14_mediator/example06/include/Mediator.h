#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "./IMediator.h"
#include "./IColleague.h"

/**
 * @brief 派生类: 中介具体实现
 *
 */
class Mediator : public IMediator
{
private:
    std::unordered_map<int, IColleague *> *colleagues = nullptr; // map容器

public:
    Mediator();
    ~Mediator();
    virtual void operation(IColleague *sender, IColleague *receiver, const std::string &msg) override; //实现operation()函数
    virtual void registerColleague(IColleague *colleague) override;                                    //实现registerColleague()函数
};

#endif