#ifndef DES_H
#define DES_H

#include "./Global.h"
#include "./Strategy.h"

class DES : public Strategy
{
    public:
        DES() = default;
        ~DES() = default;
        virtual void crypt() override;//实现crypt()函数
};
#endif