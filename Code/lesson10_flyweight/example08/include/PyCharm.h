#ifndef PYCHARM_H
#define PYCHARM_H

#include "./Tool.h"

/**
 * @brief 派生类: PyCharm
 * 
 */
class PyCharm : public Tool
{
    public:
        PyCharm();
        ~PyCharm();
        virtual void use() override;//实现use()函数
};
#endif