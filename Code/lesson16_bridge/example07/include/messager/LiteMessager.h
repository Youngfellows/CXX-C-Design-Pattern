#ifndef LITE_MESSENGER_H
#define LITE_MESSENGER_H

#include "../Messager.h"

/**
 * @brief 派生类: 简单消息传递者
 *
 */
class LiteMessager : public Messager
{
public:
    using Messager::Messager; //使用父类函数及其构造
    LiteMessager() = default;
    ~LiteMessager() = default;
    virtual void login(std::string username, std::string password) override; //实现login()函数
    virtual void sendMessage(std::string message) override;                  //实现sendMessage()函数
    virtual void sendPicture(Image *image) override;                         //实现sendPicture()函数
};
#endif