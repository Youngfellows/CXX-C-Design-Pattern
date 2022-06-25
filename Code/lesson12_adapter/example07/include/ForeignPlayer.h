#ifndef FOREIGN_PLAYER1_H
#define FOREIGN_PLAYER1_H

#include "./Global.h"

/**
 * @brief 抽象类: 外籍球员
 * 
 */
class ForeignPlayer
{
    protected:
        string name;//姓名

    public:
        ForeignPlayer() = default;
        ForeignPlayer(string name);
        virtual ~ForeignPlayer() = default;//默认析构函数

        /**
         * @brief 纯虚函数,接口: 进攻
         * 
         */
        virtual void gong() = 0;

        /**
         * @brief 纯虚函数,接口: 防守
         * 
         */
        virtual void shou() = 0;
};
#endif