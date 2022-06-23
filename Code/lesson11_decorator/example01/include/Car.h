#ifndef CAR_H
#define CAR_H

#include "./Global.h"

/**
 * @brief 部件: 是具体部件和装饰类的共同基类, 在C++中实现成抽象基类
 * 
 */
class Car
{
    private:
        string name;//车名称

    public:
        Car() = default;//默认构造函数
        explicit Car(const string &name);//显示复制构造函数
        explicit Car(string && name);//显示移动构造函数
        virtual ~Car() = default;//默认析构函数
        string getName();//获取车名

        /**
         * @brief 虚函数,接口,子类可以实现覆写: 显示车辆信息
         * 
         */
        virtual void show() = 0;
};
#endif