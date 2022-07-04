#ifndef MESSAGER_H
#define MESSAGER_H

#include "./Global.h"
#include "./Image.h"
#include "./MessagerImp.h"

/**
 * @brief 抽象类: 抽象消息类
 *
 */
class Messager
{
protected:
    MessagerImp *messagerImpl = nullptr; //平台实现

public:
    Messager(MessagerImp *messagerImpl);

    virtual ~Messager() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 登录
     *
     * @param username 用户名
     * @param password 密码
     */
    virtual void login(std::string username, std::string password) = 0;

    /**
     * @brief  纯虚函数,抽象接口
     * @brief 发送文本消息
     *
     * @param message 要发送的文本消息
     */
    virtual void sendMessage(std::string message) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief  发送图片消息
     *
     * @param image 要发送的图片消息
     */
    virtual void sendPicture(Image *image) = 0;
};
#endif