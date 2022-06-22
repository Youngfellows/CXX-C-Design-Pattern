#include "../include/Audacity.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 工具名称
 */
Audacity::Audacity() : Tool(AUDACITY)
{
    cout << "Audacity()构造函数" << endl;
}

Audacity::~Audacity()
{
    cout << "~Audacity()析构函数" << endl;
}

void Audacity::use()
{
    cout << "Audacity::use():: 使用" << this->toolName << "进行音视频分析 ...." << endl;
}