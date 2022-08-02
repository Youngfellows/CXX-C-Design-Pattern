#ifndef WAR_H
#define WAR_H

#include "../interface/IWar.h"
#include "../state/ProphaseState.h"

/**
 * @brief 派生类: 战争
 *
 */
class War : public IWar
{
private:
    int days;                                //天数
    std::shared_ptr<IState> state = nullptr; //当前状态

public:
    War();
    ~War();
    virtual void setState(std::shared_ptr<IState> state) override; //设置状态
    virtual void getState() override;           //获取状态
    virtual void setDays(int days) override;                       //设置天数
    virtual int getDays() override;
};
#endif