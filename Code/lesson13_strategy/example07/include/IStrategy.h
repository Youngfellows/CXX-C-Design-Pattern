#ifndef ISTRATEGY_H
#define ISTRATEGY_H

#include "./Hand.h"

class IStrategy
{
    public:
        virtual ~IStrategy() {}
        virtual Hand nextHand() = 0;
        virtual void study(bool win) = 0;
};

#endif