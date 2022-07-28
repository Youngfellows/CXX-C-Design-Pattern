#ifndef IMAGE_H
#define IMAGE_H

#include "../Global.h"
#include "../interface/IImage.h"

/**
 * @brief 接收者派生类: 图片接收者
 *
 */
class Image : public IImage
{
private:
    double width;  //宽
    double heigth; //高

public:
    Image(double width, double heigth);
    ~Image();
    virtual void scale(double fltScale) override; //实现scale()函数
    virtual void display() override;              //实现display()函数
};

#endif