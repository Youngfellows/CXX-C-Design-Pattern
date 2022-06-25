#ifndef RSA_H
#define RSA_H

#include "./Global.h"
#include "./Strategy.h"

class RSA : public Strategy
{
    public:
        RSA() = default;
        ~RSA() = default;
        virtual void crypt() override;//实现crypt()函数
};
#endif