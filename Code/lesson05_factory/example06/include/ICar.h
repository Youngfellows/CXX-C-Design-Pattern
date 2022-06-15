#ifndef ICAR_H
#define ICAR_H

#include "./Global.h"

/**
 * @brief 抽象类: 车
 * 
 */
class ICar
{
    public:

       /**
        * @brief 析构函数
        * 
        */
       virtual ~ICar();
    
       /**
        * @brief 车名称: 纯虚函数 - 抽象函数
        * 
        * @return string 返回车名称
        */
       virtual string name() = 0;

       /**
        * @brief 车售价: 纯虚函数 - 抽象函数
        * 
        * @return double 返回车售价
        */
       virtual double price() = 0;
       
       /**
        * @brief 车座位: 纯虚函数 - 抽象函数
        * 
        * @return int 返回车座位数
        */
       virtual int seat() = 0;
};
#endif