#ifndef CONTEXT_H
#define CONTEXT_H

#include "../Global.h"

/**
 * @brief 上下文环境
 *
 */
class Context
{
public:
    void setText(std::string text);
    std::string getText();

private:
    std::string text_;
};
#endif