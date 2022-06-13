#ifndef IANIMAL_H
#define IANIMAL_H

#include "./Global.h"

//定义接口类IAnimal - 动物
class IAnimal
{
    public:
        IAnimal();//构造函数
        virtual ~IAnimal();//析构函数
        virtual void setName(string name) = 0;//设置名称 - 纯虚函数 - 接口
        virtual string getName() = 0;//获取名称 - 纯虚函数 - 接口
        virtual IAnimal * clone() = 0;//克隆对象 - 纯虚函数 - 接口
};

#endif