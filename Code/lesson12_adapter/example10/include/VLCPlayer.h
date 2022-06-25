#ifndef VLC_PLAYER_H
#define VLC_PLAYER_H

#include "./AdvancedMediaPlayer.h"

/**
 * @brief 派生类: VLC播放器
 * 
 */
class VLCPlayer : public AdvancedMediaPlayer
{
    public:
        VLCPlayer() = default;
        ~VLCPlayer() = default;
        virtual void play(string fileName) override;//实现play()函数
};
#endif