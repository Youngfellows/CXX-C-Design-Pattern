#ifndef MOVING_BANNER_H
#define MOVING_BANNER_H

#include "./Banner.h"

/**
 * @brief 搬家横幅
 * 
 */
class MovingBanner : public Banner
{
    private:
        string title;

    public:
        MovingBanner();
        MovingBanner(string title);
        MovingBanner(string title,string content);
        // MovingBanner(string title,string content) : Banner(content)
        // {
        //     cout << " MovingBanner()构造函数" << endl;
        //     this->title = title;
        // }

        ~MovingBanner() = default;
        virtual void showWithParen() override;//实现showWithParen()函数
        virtual void showWithStar() override;//实现showWithStar()函数
};

#endif