#ifndef AMPLIFIER_H
#define AMPLIFIER_H

#include "./Global.h"

/**
 * @brief 子系统: 扩音器
 * 
 */
class Amplifier
{
    private:
       
    public:
        Amplifier();
        ~Amplifier();
        void openAmplifier();//打开扩音器
        void closeAmplifier();//关闭扩音器
};
#endif