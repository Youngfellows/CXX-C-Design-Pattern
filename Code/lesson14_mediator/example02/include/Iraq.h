#ifndef IRAQ_H
#define IRAQ_H

#include "./Country.h"

/**
 * @brief 派生类: 伊拉克
 * 
 */
class Iraq : public Country
{
    public:
        Iraq(UniteNations * uniteNations);
        ~Iraq();
        virtual void declare(const std::string message) override;//实现declare()函数
        virtual void getMessage(const std::string message) override;//实现getMessage()函数
};
#endif