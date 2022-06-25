#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    std::unique_ptr<Player> forwards = std::make_unique<Forwards>("梅西");
    std::unique_ptr<Player> center = std::make_unique<Center>("罗纳尔多");
    std::unique_ptr<Player> backwards = std::make_unique<Backwards>("罗本");

    forwards->attack();
    forwards->defence();

    center->attack();
    center->defence();

    backwards->attack();
    backwards->defence();

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