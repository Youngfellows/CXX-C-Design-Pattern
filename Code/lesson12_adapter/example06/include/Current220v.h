#ifndef CURRENT220V_H
#define CURRENT220V_H

/**
 * @brief 抽象类: 老接口,使用22v
 * 
 */
class Current220v
{
    public:
       virtual ~Current220v() = default;//默认析构函数

       /**
        * @brief 纯虚函数,抽象接口: 使用220v电压
        * 
        */
       virtual void useCurrent220v() = 0;
};
#endif