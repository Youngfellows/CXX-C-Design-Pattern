#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    srand(time(0));
    std::shared_ptr<IWar> war = std::make_shared<War>();
    for (int i = 0; i < 50; i++)
    {
        int days = rand() % 40;
        war->setDays(days);
        war->getState();
    }

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