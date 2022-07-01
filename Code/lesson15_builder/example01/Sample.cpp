#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //建造者模式
    House *house = new FlatHouse("梅景公寓");
    // std::shared_ptr<Builder> builder = std::make_shared<FlatBuilder>();            //公寓建筑队建造房子
    // std::shared_ptr<Director> director = std::make_shared<HouseDirector>(builder); //房屋设计师
    // director->construct();                                                         //设计师指挥建造房子
    // std::shared_ptr<House> house = builder->getHouse();                            //获取工程队建造好的房子
    // std::string ground = house->getGround();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
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