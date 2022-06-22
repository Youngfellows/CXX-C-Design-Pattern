#ifndef TOOL_H
#define TOOL_H

#include "./Global.h"

/**
 * @brief 抽象类: 工具
 * 
 */
class Tool
{
    protected:
        string toolName;//工具名称   

    public:
        Tool(string toolName);
        virtual ~Tool();

        /**
         * @brief 纯虚函数,抽象接口: 使用工具
         * 
         */
        virtual void use() = 0;
};
#endif