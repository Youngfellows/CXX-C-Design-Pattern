#ifndef AUDIO_PLAYER_H
#define AUDIO_PLAYER_H

#include "./MediaPlayer.h"
#include "./AdvancedMediaPlayer.h"
#include "./AudioPlayerFactory.h"


/**
 * @brief 适配器,更加类型使用不同类型的播放器播放音频资源、
 * @brief 对象适配器
 * 
 */
class AudioPlayer : public MediaPlayer
{
    private:
        std::unique_ptr<AdvancedMediaPlayer> mediaPlayer = nullptr;//被适配对象
        std::unique_ptr<Factory> factory = nullptr;//生产播放器的工厂

    public:
        AudioPlayer();
        ~AudioPlayer();
        virtual void play(string audioType,string fileName) override;//实现play()函数
};
#endif