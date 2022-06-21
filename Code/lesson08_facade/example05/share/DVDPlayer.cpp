#include "../include/DVDPlayer.h"


DVDPlayer::DVDPlayer()
{
    cout << "DVDPlayer()构造函数" << endl;
}

DVDPlayer::~DVDPlayer()
{
    cout << "~DVDPlayer()析构函数" << endl;
}

void DVDPlayer::openDVDPlayer()
{
    cout << "DVDPlayer::openDVDPlayer():: 打开DVD播放器 ..." << endl;
}

void DVDPlayer::closeDVDPlayer()
{
    cout << "DVDPlayer::closeDVDPlayer():: 关闭DVD播放器 ..." << endl;
}