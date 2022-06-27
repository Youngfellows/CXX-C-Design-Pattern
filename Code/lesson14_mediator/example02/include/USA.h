#ifndef USA_H
#define USA_H

#include "./Country.h"

/**
 * @brief 派生类: 美国
 * 
 */
class USA : public Country
{
    public:
        USA(UniteNations * uniteNations);
        ~USA();
        virtual void declare(const std::string message) override;//实现declare()函数
        virtual void getMessage(const std::string message) override;//实现getMessage()函数
};
#endif