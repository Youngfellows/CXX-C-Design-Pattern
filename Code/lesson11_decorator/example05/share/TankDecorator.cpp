#include "../include/TankDecorator.h"


/**
 * @brief 构造函数,并初始化被装饰对象
 * 
 * @param tank 被装饰对象
 */
TankDecorator::TankDecorator(std::unique_ptr<Tank> tank)
{
    cout << "TankDecorator()构造函数" << endl;
    this->tank = std::move(tank);//赋值被装饰对象
}

TankDecorator::~TankDecorator()
{
    cout << "~TankDecorator()析构函数" << endl;
    if(this->tank != nullptr)
    {
        this->tank = nullptr;
    }
}


void TankDecorator::shot()
{
    cout << "TankDecorator::shot():: ..." << endl;
    this->shot();
}

void TankDecorator::run()
{
    cout << "TankDecorator::run():: ..." << endl;
    this->run();
}

string TankDecorator::tankName()
{
    cout << "TankDecorator::tankName():: ..." << endl;
    return this->tankName();
}
