#ifndef CONTEXT_H
#define CONTEXT_H

#include "../interface/IContext.h"

/**
 * @brief 上下文环境类
 *
 */
class Context : public IContext
{
private:
    std::shared_ptr<std::map<std::string, bool>> vars = nullptr; //容器列表

public:
    Context();
    ~Context();
    virtual void set(std::string key, bool value) override;
    virtual bool get(std::string key) override;
};
#endif