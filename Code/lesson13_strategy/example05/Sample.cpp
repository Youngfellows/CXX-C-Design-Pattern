#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //使用策略模式,通过工厂模式生产具体的打折产品
    std::unique_ptr<DiscountFactory> factory = std::make_unique<NewConsumerFactory>();//工厂方法创建新客户打折产品
    std::unique_ptr<SalesOrder> carrefour = std::make_unique<Carrefour>(std::move(factory));//客户端,家乐福

    //通过客户端计算新客户打折后应该付款
    double result = carrefour->calculate(365.78);
    cout << "test1():: 新客户打折后应该付款:" << result << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //使用策略模式,通过工厂模式生产具体的打折产品
    std::unique_ptr<DiscountFactory> factory = std::make_unique<OldConsumerFactory>();//工厂方法创建老客户打折产品
    std::unique_ptr<SalesOrder> carrefour = std::make_unique<Carrefour>(std::move(factory));//客户端,家乐福

    //通过客户端计算新客户打折后应该付款
    double result = carrefour->calculate(365.78);
    cout << "test2():: 老客户打折后应该付款:" << result << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //使用策略模式,通过工厂模式生产具体的打折产品
    std::unique_ptr<DiscountFactory> factory = std::make_unique<VIPConsumerFactory>();//工厂方法创建vip客户打折产品
    std::unique_ptr<SalesOrder> carrefour = std::make_unique<Carrefour>(std::move(factory));//客户端,家乐福

    //通过客户端计算新客户打折后应该付款
    double result = carrefour->calculate(365.78);
    cout << "test3():: VIP客户打折后应该付款:" << result << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}