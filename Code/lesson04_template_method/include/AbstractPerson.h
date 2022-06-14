#ifndef ABSTRACT_PERSON_H
#define ABSTRACT_PERSON_H

#include "./Global.h"

class AbstractPerson
{
    protected:
        /**
         * @brief 纯虚函数,接口 - 获取名称
         * 
         * @return string 返回名称
         */
        virtual string getName() = 0;

    public:
    
        /**
         * @brief 模板方法
         * 
         */
        void show();//显示名称
};
#endif