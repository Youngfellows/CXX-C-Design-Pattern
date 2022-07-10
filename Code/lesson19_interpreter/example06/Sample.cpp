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

    cout << "a=" << ctx.lookUpValue(&a) << endl;
    cout << "b=" << ctx.lookUpValue(&b) << endl;

    Expression *e1 = new Mul(&a, &b); // 242
    cout << "result=" << e1->interpret(&ctx) << endl;

    Expression *e2 = new Div(&a, &b); // 2
    cout << "result=" << e2->interpret(&ctx) << endl;

    Expression *e3 = new Add(e2, &c); // 1026
    cout << "result=" << e3->interpret(&ctx) << endl;

    Expression *e = new Sub(e1, e3);//242 - 1026
    std::cout << "result=" << e->interpret(&ctx) << std::endl;

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