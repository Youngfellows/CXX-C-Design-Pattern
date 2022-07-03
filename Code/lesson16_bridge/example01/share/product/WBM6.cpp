#include "../../include/product/WBM6.h"

/**
 * @brief 构造函数
 * @brief 并初始化父类属性
 *
 * @param engine 发动机
 */
WBM6::WBM6(Engine *engine) : Car(engine)
{
    cout << "WBM6()构造函数" << endl;
}

WBM6::~WBM6()
{
    cout << "~WBM6()析构函数" << endl;
}

void WBM6::installEngine()
{
    cout << "WBM6::installEngine():: 为宝马6安装发动机 ..." << endl;
    this->engine->installEngine();
}