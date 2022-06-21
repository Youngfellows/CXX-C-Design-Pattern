#ifndef DVD_PLAYER_H
#define DVD_PLAYER_H

#include "./Global.h"

/**
 * @brief 子系统: DVD播放器
 * 
 */
class DVDPlayer
{
    private:
        
    public:
        DVDPlayer();
        ~DVDPlayer();
        void openDVDPlayer();//打开DVD播放器
        void closeDVDPlayer();//关闭DVD播放器
};
#endif