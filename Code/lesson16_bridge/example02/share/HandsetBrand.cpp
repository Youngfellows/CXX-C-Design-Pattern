#include "../include/HandsetBrand.h"

HandsetBrand::HandsetBrand(HandsetSoft *handsetSoft)
{
    cout << ":HandsetBrand()构造函数" << endl;
    this->handsetSoft = handsetSoft;
}

void HandsetBrand::setHandsetSoft(HandsetSoft *handsetSoft)
{
    cout << "HandsetBrand::setHandsetSoft():: ..." << endl;
    this->handsetSoft = handsetSoft;
}