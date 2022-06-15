#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;

    //通过抽象工厂生产产品族
    std::unique_ptr<IFactory> factory = CreateFactory::createFactory(FactoryType::AUDI_FACTORY);

    //生产奥迪汽车
    std::unique_ptr<ICar> car = factory->createCar();
    string name = car->name();//获取车名
    double price_ = car->price();//售价
    int seat_ = car->seat();//获取座位数
    cout << "车名称:" << name << endl;
    cout << "售价:" << price_ << endl;
    cout << "座位:" << seat_ << "座" << endl;

    //生产奥迪自行车
    std::unique_ptr<IBike> bike = factory->createBike();
    string bname = bike->name();//获取自行车车名
    double bprice_ = bike->price();//自行车售价
    int bseat_ = bike->seat();//获取自行车座位数
    cout << "自行车名称:" << bname << endl;
    cout << "自行车售价:" << bprice_ << endl;
    cout << "自行车座位:" << bseat_ << "座" << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //通过抽象工厂生产产品族
    std::unique_ptr<IFactory> factory = CreateFactory::createFactory(FactoryType::BMW_FACTORY);

    //生产宝马汽车
    std::unique_ptr<ICar> car = factory->createCar();
    string name = car->name();//获取车名
    double price_ = car->price();//售价
    int seat_ = car->seat();//获取座位数
    cout << "车名称:" << name << endl;
    cout << "售价:" << price_ << endl;
    cout << "座位:" << seat_ << "座" << endl;

    //生产宝马自行车
    std::unique_ptr<IBike> bike = factory->createBike();
    string bname = bike->name();//获取自行车车名
    double bprice_ = bike->price();//自行车售价
    int bseat_ = bike->seat();//获取自行车座位数
    cout << "自行车名称:" << bname << endl;
    cout << "自行车售价:" << bprice_ << endl;
    cout << "自行车座位:" << bseat_ << "座" << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //通过抽象工厂生产产品族
    std::unique_ptr<IFactory> factory = CreateFactory::createFactory(FactoryType::BENZ_FACTORY);

    //生产奔驰汽车
    std::unique_ptr<ICar> car = factory->createCar();
    string name = car->name();//获取车名
    double price_ = car->price();//售价
    int seat_ = car->seat();//获取座位数
    cout << "车名称:" << name << endl;
    cout << "售价:" << price_ << endl;
    cout << "座位:" << seat_ << "座" << endl;

    //生产奔驰自行车
    std::unique_ptr<IBike> bike = factory->createBike();
    string bname = bike->name();//获取自行车车名
    double bprice_ = bike->price();//自行车售价
    int bseat_ = bike->seat();//获取自行车座位数
    cout << "自行车名称:" << bname << endl;
    cout << "自行车售价:" << bprice_ << endl;
    cout << "自行车座位:" << bseat_ << "座" << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}