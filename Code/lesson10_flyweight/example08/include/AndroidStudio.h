#ifndef ANDROID_STUDIO_H
#define ANDROID_STUDIO_H

#include "./Tool.h"

/**
 * @brief 派生类: AndroidStudio
 * 
 */
class AndroidStudio : public Tool
{
    public:
        AndroidStudio();
        ~AndroidStudio();
        virtual void use() override;//实现use()函数
};
#endif