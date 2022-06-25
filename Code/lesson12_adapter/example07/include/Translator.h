#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "./Global.h"
#include "./Player.h"
#include "./ForeignPlayer.h"


/**
 * @brief 适配器: 翻译
 * 
 */
class Translator : public Player
{
    private:
        std::unique_ptr<ForeignPlayer> foreignPlayer = nullptr;//被适配对象,外籍球员

    public:
        Translator(std::unique_ptr<ForeignPlayer> foreignPlayer);
        ~Translator();
        virtual void attack() override;//实现attack()函数
        virtual void defence() override;//实现defence()函数

};
#endif