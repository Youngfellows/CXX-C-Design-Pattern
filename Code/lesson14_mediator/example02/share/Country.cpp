#include "../include/Country.h"

Country::Country(UniteNations * uniteNations)
{
    cout << "Country()构造函数" << endl;
    this->uniteNations = uniteNations;
}

Country::~Country()
{
    cout << "~Country()析构函数" << endl;
}
