#ifndef SUBJECT_H
#define SUBJECT_H

#include "./Global.h"

/**
 * @brief 定义抽象主体类
 * 
 */
class Subject
{
    public:

        /**
         * @brief 析构函数
         * 
         */
       virtual ~Subject();

       /**
        * @brief 抽象接口: 请求
        * 
        */
       virtual void request() = 0;
};
#endif