#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //使用新接口的实体类
    std::unique_ptr<PS2> ps2er = std::make_unique<PS2er>();
    ps2er->isPS2();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //适配器模式
    std::unique_ptr<USB> usb = std::make_unique<USBer>();//老接口的实现类
    std::unique_ptr<PS2> ps2er = std::make_unique<PS2Adapter>(std::move(usb));//使用新接口适配老接口对象
    ps2er->isPS2();

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