#ifndef CONTEXT_H
#define CONTEXT_H

#include "../interface/IContext.h"

/**
 * @brief 上下文环境
 *
 */
class Context : public IContext
{
private:
    std::shared_ptr<std::map<char, int>> var = nullptr; //变量列表

public:
    Context();
    ~Context();
    virtual void set(char variable, int value) override; //实现set()函数
    virtual int get(char variable) override;             //实现get()函数
};
#endif