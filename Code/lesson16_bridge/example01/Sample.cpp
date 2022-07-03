#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //桥接模式
    Engine *engine4400cc = new Engine4400cc(); // 4400cc发动机
    Car *wbm5 = new WBM5(engine4400cc);        //宝马5系车
    wbm5->installEngine();                     //为车安装发动机

    //释放内存
    delete engine4400cc;
    delete wbm5;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //桥接模式,将智能指针转换为普通指针
    std::shared_ptr<Engine> engine4500cc = std::make_shared<Engine4500cc>(); // 4500cc发动机
    std::shared_ptr<Car> wbm6 = std::make_shared<WBM6>(engine4500cc.get());  //宝马6系车
    wbm6->installEngine();                                                   //为车安装发动机

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //桥接模式,将智能指针转换为普通指针
    std::shared_ptr<Engine> engine4400cc = std::make_shared<Engine4400cc>(); // 4400cc发动机
    std::shared_ptr<Car> wbm6 = std::make_shared<WBM6>(engine4400cc.get());  //宝马6系车
    wbm6->installEngine();                                                   //为车安装发动机
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //桥接模式,将智能指针转换为普通指针
    std::shared_ptr<Engine> engine4500cc = std::make_shared<Engine4500cc>(); // 4500cc发动机
    std::shared_ptr<Car> wbm5 = std::make_shared<WBM5>(engine4500cc.get());  //宝马5系车
    wbm5->installEngine();                                                   //为车安装发动机
    cout << endl;
}