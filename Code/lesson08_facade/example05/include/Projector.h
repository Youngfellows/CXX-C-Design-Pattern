#ifndef PROJECTOR_H
#define PROJECTOR_H

#include "./Global.h"

/**
 * @brief 子系统: 投影仪
 * 
 */
class Projector
{
    private:
        
    public:
        Projector();
        ~Projector();
        void openScreen();//打开荧幕
        void setViewport();//设置视窗
        void closeScreen();//关闭荧幕
};
#endif