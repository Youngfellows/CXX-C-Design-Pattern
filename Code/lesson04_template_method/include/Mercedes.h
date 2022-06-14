#ifndef MERCEDES_H
#define MERCEDES_H

#include "./MakeCar.h"

class Mercedes : public MakeCar
{
    private:
        void makeHead() override;
        void makeBody() override;
        void makeTail() override;

    public:
        Mercedes();
        virtual ~Mercedes();
};
#endif