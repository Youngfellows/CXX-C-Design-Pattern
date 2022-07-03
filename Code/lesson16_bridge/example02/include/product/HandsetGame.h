#ifndef HANDSET_GAME_H
#define HANDSET_GAME_H

#include "../Global.h"
#include "../HandsetSoft.h"

/**
 * @brief 派生类: 游戏软件
 *
 */
class HandsetGame : public HandsetSoft
{
public:
    HandsetGame() = default;
    ~HandsetGame() = default;
    virtual void run() override; //实现run()函数
};
#endif