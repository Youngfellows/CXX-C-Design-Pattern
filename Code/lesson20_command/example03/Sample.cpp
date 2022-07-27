#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //不使用命令模式,直接烤肉
    std::shared_ptr<IBarbecuer> barbecure = std::make_shared<Barbecuer>("杨过", "木屋烧烤");
    barbecure->bakeChickenWing();
    barbecure->bakeMutton();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //通过命令,做烤肉
    std::shared_ptr<IBarbecuer> barbecure = std::make_shared<Barbecuer>("谢晓峰", "旺仔烧烤");
    std::shared_ptr<ICommand> bakeMuttonCommand = std::make_shared<BakeMuttonCommand>(barbecure);
    std::shared_ptr<ICommand> bakeChikenWingCommand = std::make_shared<BakeChikenWingCommand>(barbecure);
    bakeMuttonCommand->makingBarbecue();
    bakeChikenWingCommand->makingBarbecue();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //命令模式,通过执行者来调用命令
    std::shared_ptr<IBarbecuer> barbecure = std::make_shared<Barbecuer>("乔峰", "火焰山烧烤");
    std::shared_ptr<ICommand> makeChikenWingCommand = std::make_shared<BakeChikenWingCommand>(barbecure);
    std::shared_ptr<IWaiter> waiter = std::make_shared<Waiter>(makeChikenWingCommand);
    waiter->serve();

    std::shared_ptr<ICommand> makeMuttonCommand = std::make_shared<BakeMuttonCommand>(barbecure);
    waiter->setCommand(makeMuttonCommand);
    waiter->serve();

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //命令模式,批量执行命令
    std::shared_ptr<IBarbecuer> barbecure1 = std::make_shared<Barbecuer>("周芷若", "七度半");
    std::shared_ptr<ICommand> makeChikenWingCommand1 = std::make_shared<BakeChikenWingCommand>(barbecure1);
    std::shared_ptr<ICommand> makeMuttonCommand1 = std::make_shared<BakeMuttonCommand>(barbecure1);

    std::shared_ptr<IBarbecuer> barbecure2 = std::make_shared<Barbecuer>("张无忌", "韩滋味烧烤吧");
    std::shared_ptr<ICommand> makeChikenWingCommand2 = std::make_shared<BakeChikenWingCommand>(barbecure2);
    std::shared_ptr<ICommand> makeMuttonCommand2 = std::make_shared<BakeMuttonCommand>(barbecure2);

    std::shared_ptr<IWaiter> waiter = std::make_shared<AdvWaiter>();
    waiter->setCommand(makeChikenWingCommand1);
    waiter->setCommand(makeMuttonCommand1);
    waiter->setCommand(makeChikenWingCommand2);
    waiter->setCommand(makeMuttonCommand2);

    waiter->serve();

    cout << endl;
}