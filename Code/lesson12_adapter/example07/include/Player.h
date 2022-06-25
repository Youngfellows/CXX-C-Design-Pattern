#ifndef PLAYER_H
#define PLAYER_H

#include "./Global.h"

/**
 * @brief 抽象类: 球员
 * 
 */
class Player
{
    protected:
        string name;//姓名

    public:
        Player(string name);
        virtual ~Player() = default;//默认析构函数

        /**
         * @brief 纯虚函数,接口: 进攻
         * 
         */
        virtual void attack() = 0;

        /**
         * @brief 纯虚函数,接口: 防守
         * 
         */
        virtual void defence() = 0;
};
#endif