#include "../include/AudioPlayer.h"

AudioPlayer::AudioPlayer()
{
    this->factory = std::make_unique<AudioPlayerFactory>();
}

AudioPlayer::~AudioPlayer()
{
    cout << "~AudioPlayer()析构函数" << endl;
    if(this->mediaPlayer != nullptr)
    {
        this->mediaPlayer = nullptr;
    }
}

void AudioPlayer::play(string audioType,string fileName)
{
    this->mediaPlayer = this->factory->createPlayer(audioType);//使用工厂生产播放器
    this->mediaPlayer->play(fileName);//播放音频资源
}
