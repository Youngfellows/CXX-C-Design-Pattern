#ifndef AUDACITY_H
#define AUDACITY_H

#include "./Tool.h"

/**
 * @brief 派生类: AndroidStudio
 * 
 */
class Audacity : public Tool
{
    public:
        Audacity();
        ~Audacity();
        virtual void use() override;//实现use()函数
};
#endif