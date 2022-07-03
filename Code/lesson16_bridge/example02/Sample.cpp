#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //桥接模式
    HandsetSoft *handsetGame = new HandsetGame();     //游戏软件
    HandsetBrand *android = new Android(handsetGame); // Android手机
    android->run();                                   // Android手机运行软件

    //释放内存
    delete handsetGame;
    delete android;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //桥接模式
    std::shared_ptr<HandsetSoft> handsetGame = std::make_shared<HandsetGame>();         //游戏软件
    std::shared_ptr<HandsetBrand> iphone = std::make_shared<IPhone>(handsetGame.get()); //苹果手机
    iphone->run();                                                                      //苹果手机运行软件

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //桥接模式
    std::shared_ptr<HandsetSoft> soft = std::make_shared<HandsetAddressList>();    //通讯录软件
    std::shared_ptr<HandsetBrand> handset = std::make_shared<Android>(soft.get()); // Android手机
    handset->run();                                                                // Android手机运行通讯录软件

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //桥接模式
    std::shared_ptr<HandsetSoft> soft = std::make_shared<HandsetAddressList>();   //通讯录软件
    std::shared_ptr<HandsetBrand> handset = std::make_shared<IPhone>(soft.get()); // 苹果手机
    handset->run();                                                               // 苹果手机运行通讯录软件
    cout << endl;
}