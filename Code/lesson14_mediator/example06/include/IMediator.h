#ifndef IMEDIATOR_H
#define IMEDIATOR_H

#include "./Global.h"
#include "./IColleague.h"

//先声明类,后面再定义
class IColleague;

/**
 * @brief 抽象类: 中介者抽象类
 *
 */
class IMediator
{
public:
    /**
     * @brief 默认析构函数
     *
     */
    virtual ~IMediator() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 对消息进行处理
     *
     * @param sender 消息发送者
     * @param receiver 消息接收者
     * @param msg 发送的消息
     */
    virtual void operation(IColleague *sender, IColleague *receiver, const std::string &msg) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 注册同仁信息到中介
     *
     * @param colleague 要注册的同仁信息
     */
    virtual void registerColleague(IColleague *colleague) = 0;
};

#endif