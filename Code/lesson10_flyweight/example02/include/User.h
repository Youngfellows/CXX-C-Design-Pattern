#ifndef USER_H
#define USER_H

#include "./Global.h"

/**
 * @brief 实体类: 用户
 * 
 */
class User
{
    private:
       string name;//用户名

    public:
        User();
        User(string name);
        ~User();
        string getName();//获取用户名
};
#endif