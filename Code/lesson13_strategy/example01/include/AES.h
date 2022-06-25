#ifndef AES_H
#define AES_H

#include "./Global.h"
#include "./Strategy.h"

class AES : public Strategy
{
    public:
        AES() = default;
        ~AES() = default;
        virtual void crypt() override;//实现crypt()函数
};
#endif