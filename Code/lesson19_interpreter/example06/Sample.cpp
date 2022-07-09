#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //解析器模式
    Context ctx;
    Variable a;
    Variable b;
    Constant c(1024);
    ctx.registerVariable(&a, 22);
    ctx.registerVariable(&b, 11);
    Expression *e1 = new Mul(&a, &b); // 242
    Expression *e2 = new Div(&a, &b); // 1
    Expression *e3 = new Add(e2, &c); // 1025
    Expression *e = new Sub(e1, e3);
    std::cout << e->interpret(&ctx) << std::endl;

    delete e1, e2, e3, e;

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