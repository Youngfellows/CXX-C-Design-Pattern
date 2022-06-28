#ifndef CHAT_ROOM_H
#define CHAT_ROOM_H

#include "./Global.h"
#include "./User.h"

//先声明类,后面在定义
class User;

/**
 * @brief 中介者: 聊天室
 *
 */
class ChatRoom
{
    public:
        ChatRoom() = default;
        ~ChatRoom() = default;
        static void showMessage(User *user, const std::string &message);
};
#endif