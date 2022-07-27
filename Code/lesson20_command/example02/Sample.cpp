#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //小商贩直接卖东西
    std::shared_ptr<IVendor> vendor = std::make_shared<Vendor>("慕容秋荻", "女", 23, "奈雪的茶");
    vendor->sailApple();
    vendor->sailBanana();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //通过命令卖东西
    std::shared_ptr<IVendor> vendor = std::make_shared<Vendor>("越南奶茶妹", "女", 18, "南山水果商行");
    std::shared_ptr<ICommand> appleCommand = std::make_shared<AppleCommand>(vendor);
    appleCommand->sail();

    std::shared_ptr<ICommand> bananaCommand = std::make_shared<BananaCommand>(vendor);
    bananaCommand->sail();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //通过执行者(普通售貨員)卖东西
    std::shared_ptr<IVendor> vendor = std::make_shared<Vendor>("小龙女", "女", 22, "绝情谷水果店");
    std::shared_ptr<ICommand> appleCommand = std::make_shared<AppleCommand>(vendor);
    std::shared_ptr<IShopAssistant> normalSalesclerk = std::make_shared<NormalSalesclerk>(appleCommand);
    normalSalesclerk->sail();

    std::shared_ptr<ICommand> bananaCommand = std::make_shared<BananaCommand>(vendor);
    normalSalesclerk->setCommand(bananaCommand);
    normalSalesclerk->sail();

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //通过执行者(普通售貨員)卖东西
    std::shared_ptr<IVendor> vendor = std::make_shared<Vendor>("周芷若", "女", 24, "峨嵋半山水果商行");
    std::shared_ptr<ICommand> appleCommand = std::make_shared<AppleCommand>(vendor);
    std::shared_ptr<ICommand> bananaCommand = std::make_shared<BananaCommand>(vendor);

    std::shared_ptr<IVendor> vendor1 = std::make_shared<Vendor>("赵敏", "女", 22, "光明水果店");
    std::shared_ptr<ICommand> appleCommand1 = std::make_shared<AppleCommand>(vendor1);
    std::shared_ptr<ICommand> bananaCommand1 = std::make_shared<BananaCommand>(vendor1);

    std::shared_ptr<IShopAssistant> seniorSalesclerk = std::make_shared<SeniorSalesclerk>();
    seniorSalesclerk->setCommand(appleCommand);
    seniorSalesclerk->setCommand(bananaCommand);
    seniorSalesclerk->setCommand(appleCommand1);
    seniorSalesclerk->setCommand(bananaCommand1);

    seniorSalesclerk->sail();

    cout << endl;
}