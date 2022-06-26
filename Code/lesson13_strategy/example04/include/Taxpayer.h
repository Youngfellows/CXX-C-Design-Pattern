#ifndef TAXPAYER_H
#define TAXPAYER_H

#include "./Global.h"

/**
 * @brief 实体类: 纳税人
 * 
 */
class Taxpayer
{
    private:
       string name;//姓名
       double revenue;//收入

    public:
        Taxpayer() = default;
        Taxpayer(string name,double revenue); 
        ~Taxpayer() = default;
        string getName();//获取纳税人姓名
        double getRevenue();//获取纳税人收入

};
#endif