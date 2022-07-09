#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //解释器模式
    std::shared_ptr<IContext> context = std::make_shared<Context>(); //上下文环境
    context->set('a', 12);
    context->set('b', 22);
    context->set('c', 33);
    context->set('d', 44);

    //解析表达式
    std::shared_ptr<Analyzer> analyzer = std::make_shared<Analyzer>();
    std::string expStr = "a+b-c+d";
    std::shared_ptr<IExpression> expression = analyzer->analyse(expStr);

    int result = expression->interprete(context);
    cout << "result=" << result << endl;

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