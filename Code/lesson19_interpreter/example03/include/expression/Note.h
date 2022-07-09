#ifndef NOTE_H
#define NOTE_H

#include "./Expression.h"

class Note : public Expression
{
private:
    void excute(std::string, double);
};
#endif