#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //野鸭
    MallardDuck mallard;
    mallard.display();
    mallard.swim();
    mallard.performQuack();
    mallard.performFly();
    
    std::cout << std::endl;
    
    //红头鸭
    RedHeadDuck redHead;
    redHead.display();
    redHead.swim();
    redHead.performQuack();
    redHead.performFly();
    
    std::cout << std::endl;

    //饵鸭
    DecoyDuck decoy;
    decoy.display();
    decoy.swim();
    decoy.performQuack();
    decoy.performFly();
    
    std::cout << std::endl;

    //大黄鸭
    RubberDuck rubberDuckie;
    rubberDuckie.display();
    rubberDuckie.swim();
    rubberDuckie.performQuack();
    rubberDuckie.performFly();
    
    std::cout << std::endl;

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