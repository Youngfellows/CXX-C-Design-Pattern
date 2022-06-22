#include "../include/PyCharm.h"

/**
 * @brief 构造函数,初始化父类属性
 * 
 * @param name 工具名称
 */
PyCharm::PyCharm() : Tool("PyCharm")
{
    cout << "PyCharm()构造函数" << endl;
}

PyCharm::~PyCharm()
{
    cout << "~PyCharm()析构函数" << endl;
}

void PyCharm::use()
{
    cout << "PyCharm::use():: 使用" << this->toolName << "进行Python爬虫应用开发 ...." << endl;
}
