#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //建造者模式
    // std::shared_ptr<Person> thinPerson = std::make_shared<ThinPerson>("孙悟空"); //瘦子
    // std::shared_ptr<Person> fatPerson = std::make_shared<FatPerson>("猪八戒");   //胖子

    std::shared_ptr<PersonBuilder> builder = std::make_shared<ThinBuilder>(); //瘦子创建者
    builder->useTool();                                                       //使用工具
    builder->createHead();                                                    //创建头
    builder->createHand();                                                    //创建手
    builder->createBody();                                                    //创建身体
    builder->createFoot();                                                    //创建脚

    cout << endl;

    builder = std::make_shared<FatBuilder>(); //胖子创建者
    builder->useTool();                       //使用工具
    builder->createHead();                    //创建头
    builder->createHand();                    //创建手
    builder->createBody();                    //创建身体
    builder->createFoot();                    //创建脚

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //建造者模式,创建瘦子
    std::shared_ptr<PersonBuilder> builder = std::make_shared<ThinBuilder>(); //瘦子建造者
    std::shared_ptr<Director> director = std::make_shared<God>(builder);      //负责任,上帝
    std::shared_ptr<Person> thinPerson = director->createPerson();            //创建人

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //建造者模式,创建胖子
    std::shared_ptr<PersonBuilder> builder = std::make_shared<FatBuilder>(); //瘦子建造者
    std::shared_ptr<Director> director = std::make_shared<God>();            //负责任,上帝
    director->setBuilder(builder);                                           //设置建造者
    std::shared_ptr<Person> thinPerson = director->createPerson();           //创建人

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}