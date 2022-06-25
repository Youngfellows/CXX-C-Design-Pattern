#ifndef FACTORY_H
#define FACTORY_H

#include "./AdvancedMediaPlayer.h"

/**
 * @brief 抽象类: 生产播放器的工厂
 * 
 */
class Factory
{
    public:
        Factory() = default;
        virtual ~Factory() = default;

        /**
         * @brief 根据音频类型生产播放器
         * 
         * @param type 音频类型
         * @return std::unique_ptr<AdvancedMediaPlayer> 播放器指针变量
         */
        virtual std::unique_ptr<AdvancedMediaPlayer> createPlayer(string type) = 0;
};

#endif