#ifndef JEEP_H
#define JEEP_H

#include "./MakeCar.h"

class Jeep : public MakeCar
{
    private:
        void makeHead() override;
        void makeBody() override;
        void makeTail() override;

    public:
        Jeep();
        virtual ~Jeep();
     
};
#endif