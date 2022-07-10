#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //解释器模式
    std::shared_ptr<IContext> context = std::make_shared<Context>(); //上下文环境
    std::string playText = "T 800 O 2 E 0.5 G 0.5 A 3 ";              //需要解析的命令
    context->set(playText);

    while (!context->get().empty())
    {
        std::shared_ptr<IFactory> factory = std::make_shared<ExpressionFactory>(); //通过工厂创建解析器
        std::shared_ptr<IExpression> expression = factory->create(context);
        if (expression != nullptr)
        {
            expression->interprete(context); //解释器解析上下文环境命令
        }
    }

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