#ifndef AUDIO_PLAYER_FACTORY_H
#define AUDIO_PLAYER_FACTORY_H

#include "./Factory.h"
#include "./MP3Player.h"
#include "./Mp4Player.h"
#include "./VLCPlayer.h"
#include "./AVIPlayer.h"

/**
 * @brief 简单工厂,根据音频类型生产播放器
 * 
 */
class AudioPlayerFactory : public Factory
{
    public:
        AudioPlayerFactory() = default;
        ~AudioPlayerFactory() = default;
        virtual std::unique_ptr<AdvancedMediaPlayer> createPlayer(string type) override;//实现createPlayer()函数
};
#endif