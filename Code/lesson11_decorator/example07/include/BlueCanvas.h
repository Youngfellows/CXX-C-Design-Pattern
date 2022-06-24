#ifndef BLUE_CANVAS_H
#define BLUE_CANVAS_H

#include "./Canvas.h"

/**
 * @brief 派生类: 蓝色画布
 * 
 */
class BlueCanvas : public Canvas
{
    public:
        BlueCanvas() = default;
        ~BlueCanvas() = default;
        /**
         * @brief 实现draw()函数
         * 
         */
        virtual void draw() override;
};
#endif