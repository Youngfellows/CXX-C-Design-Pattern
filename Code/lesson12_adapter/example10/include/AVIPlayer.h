#ifndef AVI_PLAYER_H
#define AVI_PLAYER_H

#include "./AdvancedMediaPlayer.h"

/**
 * @brief 派生类: AVI播放器
 * 
 */
class AVIPlayer : public AdvancedMediaPlayer
{
    public:
        AVIPlayer() = default;
        ~AVIPlayer() = default;
        virtual void play(string fileName) override;//实现play()函数
};
#endif