#include "../include/Facade.h"

Facade::Facade()
{
    cout << "Facade()构造函数" << endl;
    subA = std::make_shared<SubSystemA>();
    subB = std::make_shared<SubSystemB>();
    subC = std::make_shared<SubSystemC>();
}

Facade::~Facade()
{
    cout << "~Facade()析构函数" << endl;
    // if(subA != nullptr)
    // {
    //     subA = nullptr;
    // }
    // if(subB != nullptr)
    // {
    //     subB = nullptr;
    // }
    // if(subC != nullptr)
    // {
    //     subC = nullptr;
    // }
}

void Facade::doThing()
{
    subA->doThing();
    subB->doThing();
    subC->doThing();
}