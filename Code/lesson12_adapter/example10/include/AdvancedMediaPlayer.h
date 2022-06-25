#ifndef ADVANCE_MEDIA_PLAYER_H
#define ADVANCE_MEDIA_PLAYER_H

#include "./Global.h"

/**
 * @brief 抽象类: 高级播放器接口
 * 
 */
class AdvancedMediaPlayer
{
    public:
        AdvancedMediaPlayer() = default;
        virtual ~AdvancedMediaPlayer() = default;

        /**
         * @brief 播放指定文件名的资源
         * 
         * @param fileName 指定文件名的资源
         */
        virtual void play(string fileName) = 0;
};

#endif