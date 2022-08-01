#ifndef NIGHT_STATE_H
#define NIGHT_STATE_H

#include "../Global.h"
#include "../interface/IContext.h"
#include "../interface/IState.h"
#include "./DayState.h"

/**
 * @brief 派生类: 夜晚模式
 *
 */
class NightState : public IState
{

protected:
    NightState()
    {
        cout << "NightState()私有构造函数" << endl;
    }

public:
    static NightState &GetInstance()
    {
        static NightState s;
        return s;
    }

    virtual void doColock(IContext *ctx, int hour) override;

    virtual void doUse(IContext *ctx) override
    {
        ctx->callSecurityCenter("Night use ");
    }

    virtual void doAlarm(IContext *ctx) override
    {
        ctx->callSecurityCenter("Night alarm");
    }

    virtual void doPhone(IContext *ctx) override
    {
        ctx->recoderLog("Night phone");
    }

    ~NightState() = default;

    NightState(const NightState &) = delete;
    NightState(NightState &&) = delete;
    NightState &operator=(const NightState &) = delete;
    NightState &operator=(NightState &&) = delete;
};

#endif