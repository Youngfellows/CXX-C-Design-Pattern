#include "../include/ChatRoom.h"

/**
 * @brief 显示用户聊天信息
 *
 * @param user 用户
 * @param message 聊天信息
 */
void ChatRoom::showMessage(User *user, const std::string &message)
{
    time_t now = time(0);
    cout << ctime(&now) << " [" << user->getName() << "]: " << message << endl;
}