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
    std::string cmd;

public:
    Context() = default;
    Context(std::string cmd);
    ~Context() = default;
    virtual void set(std::string cmd) override;
    virtual std::string get() override;
};
#endif