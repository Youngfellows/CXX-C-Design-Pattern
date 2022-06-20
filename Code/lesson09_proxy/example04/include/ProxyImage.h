#ifndef PROXY_IMAGE_H
#define PROXY_IMAGE_H

#include "./Image.h"

/**
 * @brief 代理类: 被代理对象是加载的图片
 * 
 */
class ProxyImage : public Image
{
    private:
        std::shared_ptr<Image> image = nullptr;//被代理对象的指针变量

    public:
        ProxyImage(std::shared_ptr<Image> image);
        ~ProxyImage();
        virtual void display() override;//实现display()函数
};
#endif