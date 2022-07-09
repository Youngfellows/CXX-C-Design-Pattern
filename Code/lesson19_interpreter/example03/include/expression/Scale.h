#ifndef SCALE_H
#define SCALE_H

#include "./Expression.h"

class Scale : public Expression
{
private:
    void excute(std::string, double);
};
#endif