#ifndef COUNTRY_H
#define COUNTRY_H

#include "./UniteNations.h"

//先声明类,后面再定义
class UniteNations;

/**
 * @brief 抽象类: 国家抽象接口
 * @brief 抽象类: 含有中介者对象
 * 
 */
class Country
{
    private:
        UniteNations * uniteNations = nullptr;//中介者,联合国的抽象类

    public:
        Country(UniteNations * uniteNations);
        virtual ~Country();

        /**
         * @brief 纯虚函数,抽象接口: 发布消息
         * 
         * @param message 发布消息
         */
        virtual void declare(const std::string message) = 0;

        /**
         * @brief 纯虚函数,抽象接口: 获取对方发布消息
         * 
         * @param message 对方发布消息
         */
        virtual void getMessage(const std::string message) = 0;
};
#endif