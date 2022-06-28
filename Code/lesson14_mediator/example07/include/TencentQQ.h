#ifndef TENCENT_QQ_H
#define TENCENT_QQ_H

#include "./Global.h"
#include "./IMediator.h"

/**
 * @brief 派生类: 中介具体实现(腾讯QQ)
 *
 */
class TencentQQ : public IMediator
{
private:
    std::vector<IColleague *> *colleagues = nullptr; //保存消息发布者的容器

public:
    TencentQQ();
    ~TencentQQ();

    /**
     * @brief 注册发布消息对象到中介者
     *
     * @param colleague 消息发布者
     */
    virtual void registerColleague(IColleague *colleague) override;

    /**
     * @brief 消息发布者发布消息
     *
     * @param colleague 消息发布者
     */
    virtual void notify(IColleague *colleague) override;
};

#endif