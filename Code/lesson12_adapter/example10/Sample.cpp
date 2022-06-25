#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //适配器模式
    std::unique_ptr<MediaPlayer> player = std::make_unique<AudioPlayer>();
    //播放mp3格式音乐
    player->play(MP3,"爱情骗子.mp3");

    //播放mp4格式视频
    player->play(MP4,"长津湖.mp4");

    //播放vlc格式视频
    player->play(VLC,"千与千寻.vlc");

    //播放avi格式视频
    player->play(AVI,"建国大业.avi");

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}