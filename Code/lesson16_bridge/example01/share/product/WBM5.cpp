#include "../../include/product/WBM5.h"

/**
 * @brief 构造函数
 * @brief 并初始化父类属性
 *
 * @param engine 发动机
 */
WBM5::WBM5(Engine *engine) : Car(engine)
{
    cout << "WBM5()构造函数" << endl;
}

WBM5::~WBM5()
{
    cout << "~WBM5()析构函数" << endl;
}

void WBM5::installEngine()
{
    cout << "WBM5::installEngine():: 为宝马5安装发动机 ..." << endl;
    this->engine->installEngine();
}
