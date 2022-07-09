#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //解释器模式
    std::shared_ptr<IContext> context = std::make_shared<Context>(); //上下文环境
    context->set("A", true);
    context->set("B", false);

    //终结表达式1、2
    std::shared_ptr<IExpression> expression1 = std::make_shared<TerminalExpression>("A");
    std::shared_ptr<IExpression> expression2 = std::make_shared<TerminalExpression>("B");

    //非终结表达式 AndExpression
    std::shared_ptr<IExpression> andExpression = std::make_shared<AndExpression>(expression1, expression2);
    std::shared_ptr<IExpression> orExpression = std::make_shared<OrExpression>(expression1, expression2);

    //获取终结表达式值
    cout << "A:" << expression1->interprete(context) << endl;
    cout << "B:" << expression2->interprete(context) << endl;

    cout << "A && B = " << andExpression->interprete(context) << endl;
    cout << "A || B = " << orExpression->interprete(context) << endl;

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