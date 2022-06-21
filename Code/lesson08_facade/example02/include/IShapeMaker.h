#ifndef I_SHAPE_MAKER_H
#define I_SHAPE_MAKER_H

#include "./Global.h"

/**
 * @brief 定义抽象类接口
 * 
 */
class IShapeMaker
{
    public:
        ~IShapeMaker();
        /**
         * @brief 接口: 绘制圆形
         * 
         */
        virtual void drawCircle() = 0;

        /**
         * @brief 接口: 获取矩形
         * 
         */
        virtual void drawRectangle() = 0;

        /**
         * @brief 接口: 获取正方形
         * 
         */
        virtual void drawSquare() = 0;
};
#endif