#ifndef PS2_H
#define PS2_H

/**
 * @brief 抽象类: PS2接口
 * 
 */
class PS2
{
    public:
       virtual ~PS2() = default;

       /**
        * @brief 纯虚函数,抽象接口: 转换为PS2接口
        * 
        */
       virtual void isPS2() = 0;
};  

#endif