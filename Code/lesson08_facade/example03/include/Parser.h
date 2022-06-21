#ifndef PARSER_H
#define PARSER_H

#include "./Global.h"

/**
 * @brief 写出一个编译器工作的几个阶段: 语法分析
 * 
 */
class Parser
{
    public:
        Parser();
        ~Parser();
        void parse();
};
#endif