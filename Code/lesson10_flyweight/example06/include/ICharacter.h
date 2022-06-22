#ifndef ICHARACTER_H
#define ICHARACTER_H

#include "./Global.h"

/**
 * @brief 抽象类: 字符
 * 
 */
class ICharacter
{
    public:
       virtual ~ICharacter() = default;

       /**
        * @brief 纯虚函数,抽象接口: 设置字宽高
        * 
        * @param w 字宽
        * @param h 字高
        */
       virtual void setSize(int w,int h) = 0;

        /**
         * @brief 纯虚函数,抽象接口: 设置字颜色
         * 
         * @param color 字颜色
         */
       virtual void setCharColor(string color) = 0;

        /**
         * @brief 纯虚函数,抽象接口: 显示字体信息
         * 
         */   
       virtual void display() = 0;
};
#endif