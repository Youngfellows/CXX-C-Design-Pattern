#ifndef USER_H
#define USER_H

#include "./Global.h"
#include "./ChatRoom.h"

//先声明类,后面再定义
class ChatRoom;

/**
 * @brief 实体类: 用户
 * 
 */
class User
{
private:
    std::string name;
public:
    User(std::string name);
    ~User() = default;
    void setName(std::string name);
    std::string getName();
    void sendMessage(const std::string &message);
};
#endif