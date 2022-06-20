#ifndef REAL_IMAGE_H
#define REAL_IMAGE_H

#include "./Image.h"


/**
 * @brief 派生类: 真实的图片
 * 
 */
class RealImage : public Image
{
    private:
        string fileName;//图片名称

    public:
        RealImage(string fileName);
        ~RealImage();
        virtual void display() override;//实现display()函数

    private:
        void loadFromDisk(string fileName);//加载图片
};
#endif