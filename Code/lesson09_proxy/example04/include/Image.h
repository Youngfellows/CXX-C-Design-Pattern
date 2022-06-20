#ifndef IMAGE_H
#define IMAGE_H

#include "./Global.h"

/**
 * @brief 抽象类接口: 图片
 * 
 */
class Image
{
    public:
       virtual ~Image();

        /**
         * @brief 纯虚函数,抽象类接口: 显示图片
         * 
         */
       virtual void display() = 0;
};
#endif