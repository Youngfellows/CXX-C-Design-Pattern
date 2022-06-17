#ifndef AA_H
#define AA_H

#include "./Global.h"

/*模板类 各种函数在类外的实现*/
template <typename T>
class AA
{
    public:
        AA(T a, T b)
        {
            this->a = a;
            this->b = b;
        }
        void printAA()
        {
            cout << "a:" << a << " b:" << b << endl;
        }
        
        AA operator+(AA &tmp)
        {
            AA tt(this->a + tmp.a, this->b + tmp.b);
            return tt;
        }
        //友元函数重载<<
        friend ostream & operator << (ostream& out, AA<T>& tmp)
        {
            out << "a=" << tmp.a << " b=" << tmp.b << endl;
            return out;
        }

    private:
        T a;
        T b;
};
#endif