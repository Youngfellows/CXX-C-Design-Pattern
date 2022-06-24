#ifndef RED_CANVAS_H
#define RED_CANVAS_H

#include "./Canvas.h"

/**
 * @brief 派生类: 红色画布
 * 
 */
class RedCanvas : public Canvas
{
    public:
        RedCanvas() = default;
        ~RedCanvas() = default;
        /**
         * @brief 实现draw()函数
         * 
         */
        virtual void draw() override;
};
#endif