#ifndef IADAPTEE_H
#define IADAPTEE_H

/**
 * @brief 抽象类: 遗留接口（老接口）
 * 
 */
class IAdaptee
{
    public:
       virtual ~IAdaptee() = default;

       /**
        * @brief 纯虚函数,抽象接口: 遗留接口
        * 
        * @param data 数据
        */
       virtual void foo(int data) = 0;

        /**
         * @brief 纯虚函数,抽象接口: 遗留接口
         * 
         * @return int 返回数据
         */
       virtual int bar() = 0;
};

#endif