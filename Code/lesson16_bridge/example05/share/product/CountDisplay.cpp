#include "../../include/product/CountDisplay.h"

void CountDisplay::mulitDisplay(unsigned int count)
{
    cout << "CountDisplay::mulitDisplay():: ..." << endl;
    NormalDisplay::open(); //调用父类open()函数
    for (unsigned int i = 0; i < count; i++)
    {
        print();
    }
    close();
}