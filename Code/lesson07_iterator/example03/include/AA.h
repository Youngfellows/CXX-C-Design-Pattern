#ifndef AA_H
#define AA_H

#include "./Global.h"

/*模板类 各种函数在类外的实现*/
template <typename T>
class AA
{
    public:
        AA(T a, T b);
        void printAA();
        AA operator+(AA &tmp);
        //友元函数重载<<
        // friend ostream & operator << <T>(ostream& out, AA<T>& tmp);
    private:
        T a;
        T b;
};
#endif