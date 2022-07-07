#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //备忘录模式
    Gamer g(100);
    Memento m = g.createMemento();
    for (int i = 0; i < 100; ++i)
    {
        std::cout << "===== " + i << std::endl;
        std::cout << g.toString() << std::endl;
        g.bet();
        if (g.getMoney() > m.getMoney())
        {
            m = g.createMemento();
            std::cout << "addMoney, save" << std::endl;
        }
        else if (g.getMoney() < m.getMoney() / 2)
        {
            g.restoreMemento(m);
            std::cout << "decMoney, restore" << std::endl;
        }
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