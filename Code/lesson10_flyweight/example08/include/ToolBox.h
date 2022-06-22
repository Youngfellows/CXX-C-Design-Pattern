#ifndef TOOL_BOX_H
#define TOOL_BOX_H

#include "./ToolFactory.h"

/**
 * @brief 享元模式,使用单例来实现: 工具集
 * 
 */
class ToolBox 
{
    private:
        static std::shared_ptr<std::mutex> mMutex;//声明静态属性,互斥量
        static ToolBox * mInstance;//声明静态属性,单例对象
        std::shared_ptr<std::map<string,std::shared_ptr<Tool>>> mToolMap;//保存工具的map容器
        std::shared_ptr<ToolFactory> toolFactory = nullptr;//生产产品的工厂

    public:
        ~ToolBox();
        static ToolBox * getInstance();//获取单例
        std::shared_ptr<Tool> getTool(const string key);//获取工具
    
    private:
        ToolBox();     
};
#endif