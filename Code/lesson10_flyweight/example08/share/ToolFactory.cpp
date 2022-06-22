#include "../include/ToolFactory.h"

ToolFactory::ToolFactory()
{
    cout << "ToolFactory()构造函数" << endl;
}

ToolFactory::~ToolFactory()
{
    cout << "~ToolFactory()析构函数" << endl;
}

/**
 * @brief 根据类型生产工具产品
 * 
 * @param tool 工具名称类型
 * @return std::shared_ptr<Tool> 返回工具产品的指针变量
 */
std::shared_ptr<Tool> ToolFactory::create(const string toolName)
{
    std::shared_ptr<Tool> tool = nullptr;//具体工具

    if(ANDROID_STUDIO == toolName)
    {
        tool = std::make_shared<AndroidStudio>();
    }else if(PYCHARM == toolName)
    {
        tool = std::make_shared<PyCharm>();
    }else if (AUDACITY == toolName)
    {
        tool = std::make_shared<Audacity>();
    }
    return tool;
}