#ifndef IBIKE_H
#define IBIKE_H

#include "./Global.h"

/**
 * @brief 抽象类: 自行车
 * 
 */
class IBike
{
    public:

       /**
        * @brief 析构函数
        * 
        */
       virtual ~IBike();
    
       /**
        * @brief 自行车名称: 纯虚函数 - 抽象函数
        * 
        * @return string 返回车名称
        */
       virtual string name() = 0;

       /**
        * @brief 自行车售价: 纯虚函数 - 抽象函数
        * 
        * @return double 返回自行车售价
        */
       virtual double price() = 0;
       
       /**
        * @brief 自行车座位: 纯虚函数 - 抽象函数
        * 
        * @return int 返回自行车座位数
        */
       virtual int seat() = 0;
};
#endif