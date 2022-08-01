#ifndef SAFE_FRAME_H
#define SAFE_FRAME_H

#include "../Global.h"
#include "../interface/IContext.h"
#include "../state/DayState.h"
#include "../state/NightState.h"

/**
 * @brief 派生类: 安全框架
 *
 */
class SafeFrame : public IContext
{
private:
    IState *m_state;

public:
    SafeFrame();
    virtual void setClock(int hour) override;
    virtual void doAction(ActionType actionType) override;
    virtual void stateChange(IState *state) override;
    virtual void callSecurityCenter(const std::string &msg) override;
    virtual void recoderLog(const std::string &msg) override;
};
#endif