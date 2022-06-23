#include "../include/AmphibianDecorator.h"

/**
 * @brief 构造函数,初始化父类被装饰对象
 * 
 * @param tank 父类被装饰对象
 */
AmphibianDecorator::AmphibianDecorator(std::unique_ptr<Tank> tank) : TankDecorator(std::move(tank))
{
    cout << "InfraredDecorator()构造函数" << endl;  
}


void AmphibianDecorator::shot()
{
    this->tank->shot();
}

void AmphibianDecorator::run()
{
    //调用被装饰对象的方法
    this->tank->run();
    this->setAmphibian("水陆两栖式坦克");
    string amphibian = this->getAmphibian();//获取红外
    cout << "坦克型号:" << tankName() << ",装饰:" << amphibian << endl;
}

string AmphibianDecorator::tankName()
{
    return this->tank->tankName();
}

void AmphibianDecorator::setAmphibian(const string &amphibian)
{
    this->amphibian = amphibian;
}

string AmphibianDecorator::getAmphibian()
{
    return this->amphibian;
}