#ifndef CANVAS_H
#define CANVAS_H

#include "./Global.h"

/**
 * @brief 抽象类: 画布
 * 
 */
class Canvas
{
    public:
        Canvas() = default;//默认构造函数
        virtual ~Canvas() = default;//默认析构函数

        /**
         * @brief 纯虚函数,抽象接口: 绘制
         * 
         */
        virtual void draw() = 0;
};
#endif