#include "../include/CaffeineBeverage.h"

/**
 * @brief 使用名称空间
 * 
 */
using namespace caffeine;

CaffeineBeverage::~CaffeineBeverage()
{
    cout << "~CaffeineBeverage()析构函数" << endl;
}

void CaffeineBeverage::boilWater()
{
    cout << "把水煮沸 ..." << endl;
}

void CaffeineBeverage::pourInCup()
{
    cout << "倒入杯中 ..." << endl;
}

/**
 * @brief 模板方法 - 定义好制作流程 - 烹饪饮品
 * 
 */
void CaffeineBeverage::prepareRecipe()
{
    this->boilWater();
    this->brew();
    this->pourInCup();
    this->addCondiments();
}

