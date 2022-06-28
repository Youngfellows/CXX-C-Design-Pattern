#ifndef ICOLLEAGUE_H
#define ICOLLEAGUE_H

#include "./Global.h"
#include "./IMediator.h"

//先声明类,后面再定义
class IMediator;

/**
 * @brief 抽象类: 同仁、同僚
 *
 */
class IColleague
{
public:
    /**
     * @brief 默认析构函数
     *
     */
    virtual ~IColleague() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 接收到消息
     *
     * @param sender 消息发送者,谁发过来的消息
     */
    virtual void receiveMsg(IColleague *sender, const std::string &msg) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 发送消息给指导同仁
     *
     * @param receiver 消息接收者,指定发给谁
     */
    virtual void sendMsg(IColleague *receiver, const std::string &msg) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置中介者
     *
     * @param mediator 中介者
     */
    virtual void setMediator(IMediator *mediator) = 0;

    /**
     * @brief 获取ID号
     *
     * @return int 返回ID号
     */
    virtual int getId() = 0;
};
#endif