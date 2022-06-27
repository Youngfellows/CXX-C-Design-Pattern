#ifndef UNITE_NATIONS_H
#define UNITE_NATIONS_H

#include "./Global.h"

//先声明类
class Country;

/**
 * @brief 抽象类: 中介者接口
 * @brief 抽象类: 联合国
 */
class UniteNations
{
    public:
        UniteNations();
        virtual ~UniteNations();

        /**
         * @brief 纯虚函数,抽象接口,某个国家通过联合国发布消息
         * 
         * @param country 发布消息的国家
         * @param message 发布的消息
         */
        virtual void declare(Country * country,const std::string & message) = 0;
};
#endif