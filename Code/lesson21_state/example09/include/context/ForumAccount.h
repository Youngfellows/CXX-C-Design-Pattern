#ifndef FORUM_ACCOUNT_H
#define FORUM_ACCOUNT_H

#include "../interface/AbstractState.h"

//先声明类,后面再定义
class AbstractState;

/**
 * @brief 论坛账号
 *
 */
class ForumAccount
{
public:
    explicit ForumAccount(std::string name);
    
    void set_state(std::shared_ptr<AbstractState> state)
    {
        state_ = state;
    }

    std::shared_ptr<AbstractState> get_state()
    {
        return state_;
    }

    std::string get_name()
    {
        return name_;
    }
    void downloadFile(int score);
    void writeNote(int score);
    void replyNote(int score);

private:
    std::shared_ptr<AbstractState> state_;
    std::string name_;
};

#endif