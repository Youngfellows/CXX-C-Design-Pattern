#ifndef SCHOOL_GIRL_H
#define SCHOOL_GIRL_H

#include "./Global.h"

/**
 * @brief 定义对象: 女孩
 * 
 */
class SchoolGirl
{
    private:
        string name;  
    public:
        SchoolGirl();
        SchoolGirl(string name);
        ~SchoolGirl();
        void setName(string name);
        string getName();
};
#endif