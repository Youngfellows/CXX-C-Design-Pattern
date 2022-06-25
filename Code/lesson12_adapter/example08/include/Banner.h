#ifndef BANNER_H
#define BANNER_H

#include "./Global.h"

/**
 * @brief 抽象类: 横幅
 * 
 */
class Banner
{
    protected:
       string content;//内容

    public:
        Banner() = default;
        Banner(string conten);//显示构造函数
        virtual ~Banner() = default;

        /**
         * @brief 纯虚函数,抽象接口: 用括号显示
         * 
         */
        virtual void showWithParen() = 0;
        
        /**
         * @brief 纯虚函数,抽象接口: 用星星显示
         * 
         */
        virtual void showWithStar() = 0;
};
#endif