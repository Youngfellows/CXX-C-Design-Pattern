#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    // 使用适配器模式
    //std::unique_ptr<Banner> banner = std::make_unique<MovingBanner>("乔迁之喜");//老对象,老接口
    std::unique_ptr<Banner> banner = std::make_unique<MovingBanner>("乔迁之喜","恭喜搬到新家");//老对象,老接口
    std::unique_ptr<Painter> painter = std::make_unique<PainterBanner>(std::move(banner));//使用适配器适配老接口,老对象
    
    //通过新接口调用老对象
    painter->printStrong();
    painter->printWeak();

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