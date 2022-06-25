#ifndef MP4_PLAYER_H
#define MP4_PLAYER_H

#include "./AdvancedMediaPlayer.h"

/**
 * @brief 派生类: MP4播放器
 * 
 */
class MP4Player : public AdvancedMediaPlayer
{
    public:
        MP4Player() = default;
        ~MP4Player() = default;
        virtual void play(string fileName) override;//实现play()函数
};
#endif