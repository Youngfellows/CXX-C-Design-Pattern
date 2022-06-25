#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //使用新接口充电器
    std::unique_ptr<Current18v> charger = std::make_unique<OwnCharger>();
    charger->useCurrent18v();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //使用老接口充电器
    std::unique_ptr<Current220v> charger = std::make_unique<GoogleCharger>();
    charger->useCurrent220v();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //适配器模式,使用18v新接口也能使用220v接口充电器
    std::unique_ptr<Current220v> charger220v = std::make_unique<GoogleCharger>();//220v接口充电器
    std::unique_ptr<Current18v> chargerAdapter = std::make_unique<Adapter>(std::move(charger220v));//使用适配器适配220v接口充电器,使它也能使用18v接口
    chargerAdapter->useCurrent18v();

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}