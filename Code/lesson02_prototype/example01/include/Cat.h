#ifndef CAT_H
#define CAT_H

#include "./IAnimal.h"

//定义类Cat - 猫
class Cat : public IAnimal
{
    private:
        string name;//名称

    public:
        Cat(string name);//构造函数
        ~Cat();//析构函数
        void setName(string name);//设置名称
        string getName();//获取名称
        IAnimal * clone();//克隆对象
};

#endif