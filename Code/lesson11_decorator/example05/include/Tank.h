#ifndef TANK_H
#define TANK_H

#include "./Global.h"

/**
 * @brief 抽象类: 坦克
 * 
 */
class Tank
{
    public:
       virtual ~Tank() = default;//默认析构函数

       /**
        * @brief 纯虚函数,抽象接口: 射击
        * 
        */
       virtual void shot() = 0;

        /**
         * @brief 纯虚函数,抽象接口: 跑
         * 
         */
       virtual void run() = 0;

        /**
         * @brief 纯虚函数,抽象接口: 获取坦克名称
         * 
         * @return string 返回坦克名称
         */
       virtual string tankName() = 0;
};

#endif