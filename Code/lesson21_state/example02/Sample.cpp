#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    std::shared_ptr<IContext> context = std::make_shared<Context>();     //上下文环境
    std::shared_ptr<IState> startState = std::make_shared<StartState>(); //开始状态
    // context->setState(startState);
    startState->doAction(context); // start状态做某事
    cout << startState->toString() << endl;

    std::shared_ptr<IState> stopState = std::make_shared<StopState>(); //停止状态
    stopState->doAction(context);
    cout << stopState->toString() << endl;

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