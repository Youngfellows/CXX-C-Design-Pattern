#ifndef FOREIGN_CENTER_H
#define FOREIGN_CENTER_H

#include "./ForeignPlayer.h"

/**
 * @brief 派生类: 外籍中锋
 * 
 */
class ForeignCenter : public ForeignPlayer
{
    public:
        ForeignCenter(string name);
        ~ForeignCenter() = default;
        virtual void gong() override;//实现gong()函数
        virtual void shou() override;//实现shou()函数
};

#endif