#include "../include/AudioPlayerFactory.h"

/**
 * @brief 根据音频类型生产播放器
 * 
 * @param type 音频类型
 * @return std::unique_ptr<AdvancedMediaPlayer> 返回播放器指针变量
 */
std::unique_ptr<AdvancedMediaPlayer> AudioPlayerFactory::createPlayer(string type)
{
    std::unique_ptr<AdvancedMediaPlayer> player = nullptr;//播放器

    if(MP3.compare(type) == 0)
    {
        player = std::make_unique<MP3Player>();
    }
    else if(MP4.compare(type) == 0)
    {
        player = std::make_unique<MP4Player>();
    }
    else if(VLC.compare(type) == 0)
    {
        player = std::make_unique<VLCPlayer>();
    }
    else if(AVI.compare(type) == 0)
    {
        player = std::make_unique<AVIPlayer>();
    }
    return player;
}