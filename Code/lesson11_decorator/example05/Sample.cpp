#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //装饰者模式,创建对象,使用智能指针
    std::unique_ptr<Tank> tankT50 = std::make_unique<T50>();
    //装饰T50坦克
    tankT50 = std::make_unique<InfraredDecorator>(std::move(tankT50));//红外
    tankT50 = std::make_unique<AmphibianDecorator>(std::move(tankT50));//两栖登陆式

    //获取装饰后的坦克信息
    tankT50->run();
    tankT50->shot();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //装饰者模式,创建对象,使用智能指针
    std::unique_ptr<Tank> tankT75 = std::make_unique<T75>();
    //装饰T50坦克
    tankT75 = std::make_unique<InfraredDecorator>(std::move(tankT75));//红外
    tankT75 = std::make_unique<AmphibianDecorator>(std::move(tankT75));//两栖登陆式

    //获取装饰后的坦克信息
    tankT75->run();
    tankT75->shot();
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}