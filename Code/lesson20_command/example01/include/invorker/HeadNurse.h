#ifndef HEAD_NURSE_H
#define HEAD_NURSE_H

#include "../interface/INurse.h"

/**
 * @brief 派生类: 护士长
 *
 */
class HeadNurse : public INurse
{
private:
    std::shared_ptr<std::list<std::shared_ptr<ICommand>>> commands; //命令列表

public:
    HeadNurse();
    ~HeadNurse();
    virtual void setCommand(std::shared_ptr<ICommand> command) override; //实现setCommand()函数
    virtual void submittedCase() override;                               //实现submittedCase()函数
};

#endif