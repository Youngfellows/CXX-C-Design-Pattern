#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //使用策略模式
    std::unique_ptr<TaxFactory> factory = std::make_unique<CNFactory>();//工厂方法创建生产计算税收策略实现类
    std::unique_ptr<SalesOrder> client = std::make_unique<SalesOrder>(std::move(factory));//创建客户端

    //创建纳税人信息
    std::unique_ptr<Taxpayer> taxpayer = std::make_unique<Taxpayer>("马云",88888);
    cout << "中国," << taxpayer->getName() << ",收入:" << taxpayer->getRevenue() << endl; 

    //通过客户端调用纳税方法
    double result = client->calculateTax(std::move(taxpayer));
    cout << " test1():: result = " << result << endl;
    //cout << "中国," << taxpayer->getName() << ",缴纳税额:" << result << endl; 

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //使用策略模式
    std::unique_ptr<TaxFactory> factory = std::make_unique<USFactory>();//工厂方法创建生产计算税收策略实现类
    std::unique_ptr<SalesOrder> client = std::make_unique<SalesOrder>(std::move(factory));//创建客户端

    //创建纳税人信息
    std::unique_ptr<Taxpayer> taxpayer = std::make_unique<Taxpayer>("马斯克",9999);

    //通过客户端调用纳税方法
    double result = client->calculateTax(std::move(taxpayer));
    //cout << "美国," << taxpayer->getName() << ",缴纳税额:" << result << endl; 
    cout << " test2():: result = " << result << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //使用策略模式
    std::unique_ptr<TaxFactory> factory = std::make_unique<FRFactory>();//工厂方法创建生产计算税收策略实现类
    std::unique_ptr<SalesOrder> client = std::make_unique<SalesOrder>(std::move(factory));//创建客户端

    //创建纳税人信息
    std::unique_ptr<Taxpayer> taxpayer = std::make_unique<Taxpayer>("马克龙",12345);

    //通过客户端调用纳税方法
    double result = client->calculateTax(std::move(taxpayer));
    //cout << "法国," << taxpayer->getName() << ",缴纳税额:" << result << endl; 
    cout << " test3():: result = " << result << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //使用策略模式
    std::unique_ptr<TaxFactory> factory = std::make_unique<DEFactory>();//工厂方法创建生产计算税收策略实现类
    std::unique_ptr<SalesOrder> client = std::make_unique<SalesOrder>(std::move(factory));//创建客户端

    //创建纳税人信息
    std::unique_ptr<Taxpayer> taxpayer = std::make_unique<Taxpayer>("穆勒",12345);

    //通过客户端调用纳税方法
    double result = client->calculateTax(std::move(taxpayer));
    //cout << "德国," << taxpayer->getName() << ",缴纳税额:" << result << endl; 
    cout << " test4():: result = " << result << endl;
    cout << endl;
}