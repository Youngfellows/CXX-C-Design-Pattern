#include "../include/InfraredDecorator.h"

/**
 * @brief 构造函数,初始化父类被装饰对象
 * 
 * @param tank 父类被装饰对象
 */
InfraredDecorator::InfraredDecorator(std::unique_ptr<Tank> tank) : TankDecorator(std::move(tank))
{
    cout << "InfraredDecorator()构造函数" << endl;  
}


void InfraredDecorator::shot()
{
    this->tank->shot();
}

void InfraredDecorator::run()
{
    //调用被装饰对象的方法
    this->tank->run();
    this->setInfrared("极远红外线");
    string infrared = this->getInfrared();//获取红外
    cout << "坦克型号:" << tankName() << ",装饰:" << infrared << endl;
}

string InfraredDecorator::tankName()
{
    return this->tank->tankName();
}

void InfraredDecorator::setInfrared(const string &infrared)
{
    this->infrared = infrared;
}

string InfraredDecorator::getInfrared()
{
    return this->infrared;
}