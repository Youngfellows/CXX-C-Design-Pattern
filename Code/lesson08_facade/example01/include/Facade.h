#ifndef FACADE_H
#define FACADE_H

#include "./SubSystemA.h"
#include "./SubSystemB.h"
#include "./SubSystemC.h"

/**
 * @brief 外观模式
 * 
 */
class Facade
{
    private:
        std::shared_ptr<SubSystemA> subA = nullptr;//子系统A
        std::shared_ptr<SubSystemB> subB = nullptr;//子系统B
        std::shared_ptr<SubSystemC> subC = nullptr;//之系统C

    public:
        Facade();
        ~Facade();
        void doThing();
};
#endif