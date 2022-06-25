#ifndef MP3_PLAYER_H
#define MP3_PLAYER_H

#include "./AdvancedMediaPlayer.h"

/**
 * @brief 派生类: MP3音乐播放器
 * 
 */
class MP3Player : public AdvancedMediaPlayer
{
    public:
        MP3Player() = default;
        ~MP3Player() = default;
        virtual void play(string fileName) override;//实现play()函数
};
#endif