#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //直接访问算法
    std::unique_ptr<Strategy> strategy = std::make_unique<OperationAdd>();
    double result = strategy->doOperation(2,3);
    cout << "add,result:" << result << endl;

    strategy = std::make_unique<OperationSubstract>();
    result = strategy->doOperation(5,3);
    cout << "sub,result:" << result << endl;
    
    strategy = std::make_unique<OperationMultiply>();
    result = strategy->doOperation(5,3);
    cout << "mul,result:" << result << endl;

    strategy = std::make_unique<OperationDivision>();
    result = strategy->doOperation(15,4);
    cout << "div,result:" << result << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //策略模式,使用客户端调用算法
    std::unique_ptr<Strategy> strategy = std::make_unique<OperationAdd>();//加法算法
    std::unique_ptr<IContext> client = std::make_unique<Context>(std::move(strategy));//客户端,算法间接调用
    double result = client->excuteStrategy(11,3);
    cout << "add,result:" << result << endl;

    strategy = std::make_unique<OperationSubstract>();//减法运算
    client = std::make_unique<Context>(std::move(strategy));//客户端,算法间接调用
    result = client->excuteStrategy(8,3);
    cout << "sub,result:" << result << endl;

    strategy = std::make_unique<OperationMultiply>();//乘法运算
    client = std::make_unique<Context>(std::move(strategy));//客户端,算法间接调用
    result = client->excuteStrategy(8,3);
    cout << "mul,result:" << result << endl;

    strategy = std::make_unique<OperationDivision>();//除法运算
    client = std::make_unique<Context>(std::move(strategy));//客户端,算法间接调用
    result = client->excuteStrategy(8,3);
    cout << "mul,result:" << result << endl;

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