#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //建造者模式
    // std::shared_ptr<House> House = std::make_shared<FlatHouse>("顺丰公寓");
    std::shared_ptr<Builder> builder = std::make_shared<FlatBuilder>();            //公寓建造队
    std::shared_ptr<Director> director = std::make_shared<HouseDirector>(builder); //设计师
    director->construct();                                                         //设置师赋值建造逻辑
    std::shared_ptr<House> house = builder->getHouse();                            //获取建造好的房子
    std::string ground = house->getGround();                                       //获取地板
    std::string window = house->getWindow();                                       //获取窗户
    std::string wall = house->getWall();                                           //获取墙壁
    std::string door = house->getDoor();                                           //获取门
    std::string roof = house->getRoof();                                           //获取屋顶
    cout << "地板:" << ground << endl;
    cout << "窗户:" << window << endl;
    cout << "墙壁:" << wall << endl;
    cout << "门:" << door << endl;
    cout << "屋顶:" << roof << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //建造者模式
    // std::shared_ptr<House> House = std::make_shared<FlatHouse>("顺丰公寓");
    std::shared_ptr<Builder> builder = std::make_shared<SkyscrapersBuilder>();     //摩天大楼造队
    std::shared_ptr<Director> director = std::make_shared<HouseDirector>(builder); //设计师
    director->construct();                                                         //设置师赋值建造逻辑
    std::shared_ptr<House> house = builder->getHouse();                            //获取建造好的房子
    std::string ground = house->getGround();                                       //获取地板
    std::string window = house->getWindow();                                       //获取窗户
    std::string wall = house->getWall();                                           //获取墙壁
    std::string door = house->getDoor();                                           //获取门
    std::string roof = house->getRoof();                                           //获取屋顶
    cout << "地板:" << ground << endl;
    cout << "窗户:" << window << endl;
    cout << "墙壁:" << wall << endl;
    cout << "门:" << door << endl;
    cout << "屋顶:" << roof << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //建造者模式
    // std::shared_ptr<House> House = std::make_shared<FlatHouse>("顺丰公寓");
    std::shared_ptr<Builder> builder = std::make_shared<StoneBuilder>();           //石屋建造队
    std::shared_ptr<Director> director = std::make_shared<HouseDirector>(builder); //设计师
    director->construct();                                                         //设置师赋值建造逻辑
    std::shared_ptr<House> house = builder->getHouse();                            //获取建造好的房子
    std::string ground = house->getGround();                                       //获取地板
    std::string window = house->getWindow();                                       //获取窗户
    std::string wall = house->getWall();                                           //获取墙壁
    std::string door = house->getDoor();                                           //获取门
    std::string roof = house->getRoof();                                           //获取屋顶
    cout << "地板:" << ground << endl;
    cout << "窗户:" << window << endl;
    cout << "墙壁:" << wall << endl;
    cout << "门:" << door << endl;
    cout << "屋顶:" << roof << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //建造者模式
    // std::shared_ptr<House> House = std::make_shared<FlatHouse>("顺丰公寓");
    std::shared_ptr<Builder> builder = std::make_shared<VillaBuilder>();           //别墅建造队
    std::shared_ptr<Director> director = std::make_shared<HouseDirector>(builder); //设计师
    director->construct();                                                         //设置师赋值建造逻辑
    std::shared_ptr<House> house = builder->getHouse();                            //获取建造好的房子
    std::string ground = house->getGround();                                       //获取地板
    std::string window = house->getWindow();                                       //获取窗户
    std::string wall = house->getWall();                                           //获取墙壁
    std::string door = house->getDoor();                                           //获取门
    std::string roof = house->getRoof();                                           //获取屋顶
    cout << "地板:" << ground << endl;
    cout << "窗户:" << window << endl;
    cout << "墙壁:" << wall << endl;
    cout << "门:" << door << endl;
    cout << "屋顶:" << roof << endl;
    cout << endl;
}

void test5()
{
    cout << "test5():: ..." << endl;
    //建造者模式
    // std::shared_ptr<House> House = std::make_shared<FlatHouse>("顺丰公寓");
    std::shared_ptr<Builder> builder = std::make_shared<WoodenBuilder>();          //木屋建造队
    std::shared_ptr<Director> director = std::make_shared<HouseDirector>(builder); //设计师
    director->construct();                                                         //设置师赋值建造逻辑
    std::shared_ptr<House> house = builder->getHouse();                            //获取建造好的房子
    std::string ground = house->getGround();                                       //获取地板
    std::string window = house->getWindow();                                       //获取窗户
    std::string wall = house->getWall();                                           //获取墙壁
    std::string door = house->getDoor();                                           //获取门
    std::string roof = house->getRoof();                                           //获取屋顶
    cout << "地板:" << ground << endl;
    cout << "窗户:" << window << endl;
    cout << "墙壁:" << wall << endl;
    cout << "门:" << door << endl;
    cout << "屋顶:" << roof << endl;
    cout << endl;
}