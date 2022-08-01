#ifndef PERSON_H
#define PERSON_H

#include "../Global.h"
#include "../interface/IPerson.h"
#include "../state/StandState.h"

/**
 * @brief 派生类: 游戏人
 *
 */
class Person : public IPerson
{
private:
    IState *state; //当前状态

public:
    Person();
    ~Person();
    virtual void onKeyDown() override;
    virtual void onKeyUp() override;
    virtual void moveOn() override;
    virtual void setState(IState *state) override;
};
#endif