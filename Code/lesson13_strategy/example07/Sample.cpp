#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //策略模式
    std::shared_ptr<IStrategy> s1(new WinningStrategy);
    std::shared_ptr<IStrategy> s2(new ProbStrategy);
    Player p1("SmallTao", s1.get());
    Player p2("BigTao", s2.get());
   
    for (int i = 0; i < 100000; ++i)
    {
        Hand h1 = p1.nextHand();
        Hand h2 = p2.nextHand();
        if (h1 == h2)
        {
            p1.even();
            p2.even();
        }
        else if (h1 > h2)
        {
            p1.win();
            p2.lose();
        }
        else
        {
            p1.lose();
            p2.win();
        }
    }
    std::cout << p1.getString() << std::endl;
    std::cout << p2.getString() << std::endl;

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