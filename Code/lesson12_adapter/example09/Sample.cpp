#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    // 半径为10的圆孔
    RoundHole* hole = new RoundHole(10);

    // 半径分别为5和20的大小方钉 + 它们的适配器
    SquarePeg* samll_square_peg = new SquarePeg(5);
    SquarePeg* large_square_peg = new SquarePeg(20);
    SquarePegAdapter* small_square_peg_adapter = new SquarePegAdapter(samll_square_peg);
    SquarePegAdapter* large_square_peg_adapter = new SquarePegAdapter(large_square_peg);

    // hole->isFit(samll_square_peg);  // 编译报错
    // hole->isFit(large_square_peg);  // 编译报错
    if (hole->isFit(small_square_peg_adapter)) {
        std::cout << "小方钉子能够装入到圆孔中" << std::endl;
    } else {
        std::cout << "小方钉子不能够装入到圆孔中" << std::endl;
    }
    if (hole->isFit(large_square_peg_adapter)) {
        std::cout << "大方钉子能够装入到圆孔中" << std::endl;
    } else {
        std::cout << "大方钉子不能够装入到圆孔中" << std::endl;
    }

    //释放内存
    delete hole;
    delete small_square_peg_adapter;
    delete large_square_peg_adapter;
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