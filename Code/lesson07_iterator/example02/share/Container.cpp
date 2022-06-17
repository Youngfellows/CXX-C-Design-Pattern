#include "../include/Container.h"

template <typename Item>
Container<Item>::~Container()
{
   cout << "~Container()析构函数" << endl;
}
