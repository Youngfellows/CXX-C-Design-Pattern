#ifndef BEAUTY_NURSE_H
#define BEAUTY_NURSE_H

#include "../interface/INurse.h"

/**
 * @brief 派生类: 美丽的护士
 *
 */
class BeautyNurse : public INurse
{
private:
    std::shared_ptr<ICommand> command;

public:
    BeautyNurse();
    BeautyNurse(std::shared_ptr<ICommand> command);
    ~BeautyNurse();
    virtual void setCommand(std::shared_ptr<ICommand> command) override; //实现setCommand()函数
    virtual void submittedCase() override;                               //实现submittedCase()函数
};
#endif