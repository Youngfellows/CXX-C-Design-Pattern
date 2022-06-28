#ifndef IMEDIATOR_H
#define IMEDIATOR_H

#include "./IColleague.h"

/**
 * @brief 抽象类: 抽象中介者
 *
 */
class IMediator
{
public:
    virtual ~IMediator() = default;

    /**
     * @brief 注册发布消息对象到中介者
     *
     * @param colleague 消息发布者
     */
    virtual void registerColleague(IColleague *colleague) = 0;

    /**
     * @brief 消息发布者发布消息
     *
     * @param colleague 消息发布者
     */
    virtual void notify(IColleague *colleague) = 0;
};

#endif