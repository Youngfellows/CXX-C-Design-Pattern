#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include "./Global.h"

/**
 * @brief 抽象类: 播放器接口
 * 
 */
class MediaPlayer
{
    public:
        /**
         * @brief 默认构造函数
         * 
         */
        MediaPlayer() = default;

        /**
         * @brief 默认析构函数
         * 
         */
        virtual ~MediaPlayer() = default;

        /**
         * @brief 根据音频类型播放
         * 
         * @param audioType 音频类型
         * @param fileName 文件名
         */
        virtual void play(string audioType,string fileName) = 0;
};

#endif