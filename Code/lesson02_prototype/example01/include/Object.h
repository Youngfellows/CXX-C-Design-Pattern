#ifndef OBJECT_H
#define OBJECT_H

#include "./Global.h"

//抽象原型类
class Object
{
    public:
        Object();
        ~Object();
        virtual  Object * clone() = 0;//克隆对象
};

#endif