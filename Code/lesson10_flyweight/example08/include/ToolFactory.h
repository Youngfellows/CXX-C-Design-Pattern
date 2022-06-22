#ifndef TOOL_FACTORY_H
#define TOOL_FACTORY_H

#include "./Factory.h"
#include "./AndroidStudio.h"
#include "./PyCharm.h"
#include "./Audacity.h"

/**
 * @brief 生产产品的工厂
 * 
 */
class ToolFactory : public Factory
{
    public:
        ToolFactory();
        ~ToolFactory();
        virtual std::shared_ptr<Tool> create(const string tool) override;//实现create()接口函数
};

#endif 