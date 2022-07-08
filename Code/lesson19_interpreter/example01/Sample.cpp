#include "./include/Sample.h"

/**
 * @brief 解释器模式类图角色和职责
 * @brief Context：解释器上下文环境类。用来存储解释器的上下文环境，比如需要解释的文法等
 * @brief AbstractExpression：解释器抽象类
 * @brief ConcreteExpression：解释器具体实现类
 * @brief Interpreter 模式中，提供了 TerminalException 和 NonTerminalException 两种表达式的解释方式，
 *        Context 类用于为解释过程提供一些附加信息（例如全局的信息）
 *
 */
void test1()
{
    cout << "test1():: ..." << endl;
    //解释器模式
    std::shared_ptr<IContext> context = std::make_shared<Context>(36); //上下文环境
    int number = context->getNumber();
    int result = context->getResult();
    cout << "test1():: origin: " << number << ",result: " << result << endl;
    std::shared_ptr<IExpression> plusExpression = std::make_shared<PlusExpression>(); //自增加解析器
    plusExpression->interpreter(context.get());                                       //使用解析器解析
    number = context->getNumber();
    result = context->getResult();
    cout << "test1():: plus: " << number << ",result: " << result << endl;

    std::shared_ptr<IExpression> minusExpression = std::make_shared<MinusExpression>(); //自减加解析器
    minusExpression->interpreter(context.get());
    number = context->getNumber();
    result = context->getResult(); //使用解析器解析
    cout << "test1():: plus: " << number << ",result: " << result << endl;

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