#include "../include/AndroidStudio.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 工具名称
 */
AndroidStudio::AndroidStudio() : Tool(ANDROID_STUDIO)
{
    cout << "AndroidStudio()构造函数" << endl;
}

AndroidStudio::~AndroidStudio()
{
    cout << "~AndroidStudio()析构函数" << endl;
}

void AndroidStudio::use()
{
    cout << "AndroidStudio::use():: 使用" << this->toolName << "进行Android应用开发 ...." << endl;
}
