#ifndef PAINTER_BANNER_H
#define PAINTER_BANNER_H

#include "./Banner.h"
#include "./Painter.h"

/**
 * @brief 适配器: 使Banner也能适配Painter接口
 * @brief 使用对象适配器
 */
class PainterBanner : public Painter
{
    private:
        std::unique_ptr<Banner> banner = nullptr;//被适配对象

    public:
        PainterBanner(std::unique_ptr<Banner> banner);
        ~PainterBanner();
        virtual void printStrong() override;//实现printStrong()函数
        virtual void printWeak() override;//实现printWeak()函数

};
#endif