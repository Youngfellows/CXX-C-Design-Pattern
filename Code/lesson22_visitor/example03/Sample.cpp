#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //访问者模式
    std::shared_ptr<ObjectStructure> structure = std::make_shared<ObjectStructure>();
    std::shared_ptr<IPerson> man = std::make_shared<Man>();
    std::shared_ptr<IPerson> woman = std::make_shared<Woman>();
    structure->add(man);
    structure->add(woman);

    //访问者,成功的行为
    std::shared_ptr<IAction> success = std::make_shared<Success>();
    structure->display(success);

    //访问者,失败的行为
    std::shared_ptr<IAction> failure = std::make_shared<Failure>();
    structure->display(failure);

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