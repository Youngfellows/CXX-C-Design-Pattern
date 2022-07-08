#ifndef CONTEXT_H
#define CONTEXT_H

#include "../Global.h"
#include "../interface/IContext.h"

/**
 * @brief 实体类: 解释器上下文环境类
 *
 */
class Context : public IContext
{
private:
    int number; //数据
    int result; //数据操作结果

public:
    Context() = default;
    Context(int num);
    ~Context();
    virtual void setNumber(int num) override; //实现setNumber()函数
    virtual int getNumber() override;         //实现getNumber()函数
    virtual int getResult() override;         //实现getNumber()函数
};
#endif