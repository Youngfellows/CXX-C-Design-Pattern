#ifndef MOVIE_FACADE_H
#define MOVIE_FACADE_H

#include "./Projector.h"
#include "./Amplifier.h"
#include "./DVDPlayer.h"
#include "./Light.h"

/**
 * @brief 为这些复杂的操作提供一个一致的门面（外观）
 * @brief 高层接口 Facade
 * 
 */
class MovieFacade
{
    private:
        Projector *projector = nullptr;//投影仪
        Amplifier *amplifier = nullptr;//扩音器
        DVDPlayer *dvdPlayer = nullptr;//DVD播放器
        Light *light = nullptr;//灯光

    public:
        MovieFacade();
        ~MovieFacade();
        void openMovie();//放电影
        void closeMovie();//关闭电影
};
#endif