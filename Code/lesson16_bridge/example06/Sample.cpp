#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //桥接模式
    IElectricalEquipment *eleEquipment = new Light();       //电灯
    ISwitch *eleSwitch = new PullChainSwitch(eleEquipment); //拉链式开关
    eleSwitch->on();                                        //打开电器
    eleSwitch->off();                                       //关闭电器

    //释放内存
    delete eleEquipment;
    delete eleSwitch;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //桥接模式,使用普通指针和智能指针相互转换
    std::shared_ptr<IElectricalEquipment> eleEquipment(new Light());                              //电灯,把普通指针转化为智能指针
    std::shared_ptr<ISwitch> eleSwitch = std::make_shared<TwoPositionSwitch>(eleEquipment.get()); //两位式开关,使用get()函数把智能指针转化为普通指针
    eleSwitch->on();                                                                              //打开电器
    eleSwitch->off();                                                                             //关闭电器

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //桥接模式,使用普通指针和智能指针相互转换
    std::shared_ptr<IElectricalEquipment> eleEquipment = std::make_shared<Fan>();               //风扇
    std::shared_ptr<ISwitch> eleSwitch = std::make_shared<PullChainSwitch>(eleEquipment.get()); //拉链式开关,使用get()函数把智能指针转化为普通指针
    eleSwitch->on();                                                                            //打开电器
    eleSwitch->off();                                                                           //关闭电器

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //桥接模式,使用普通指针和智能指针相互转换
    std::shared_ptr<IElectricalEquipment> eleEquipment = std::make_shared<Fan>();                 //风扇
    std::shared_ptr<ISwitch> eleSwitch = std::make_shared<TwoPositionSwitch>(eleEquipment.get()); //两位式开关,使用get()函数把智能指针转化为普通指针
    eleSwitch->on();                                                                              //打开电器
    eleSwitch->off();                                                                             //关闭电器
    cout << endl;
}