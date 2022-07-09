#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //解释器模式
    Context *context_;
    ExpressionFactory *expression_factory_;
    Expression *expression_;

    expression_factory_ = new ExpressionFactory();
    context_ = new Context();
    context_->setText("O 2 E 0.5 G 0.5 A 3");
    while (context_->getText().length())
    {
        expression_ = expression_factory_->createExpression(context_);
        expression_->interprete(context_);
        delete expression_;
    }
    delete context_;
    delete expression_factory_;
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