#ifndef DAY_STATE_H
#define DAY_STATE_H

#include "../Global.h"
#include "../interface/IContext.h"
#include "../interface/IState.h"
#include "./NightState.h"

/**
 * @brief 派生类: 白天模式
 *
 */
class DayState : public IState
{
protected:
    DayState()
    {
        cout << "DayState()私有构造函数" << endl;
    }

public:
    static DayState &GetInstance()
    {
        static DayState s;
        return s;
    }

    virtual void doColock(IContext *ctx, int hour) override;

    virtual void doUse(IContext *ctx) override
    {
        ctx->recoderLog("Day use ");
    }

    virtual void doAlarm(IContext *ctx) override
    {
        ctx->callSecurityCenter("Day alarm");
    }

    virtual void doPhone(IContext *ctx) override
    {
        ctx->callSecurityCenter("Day phone");
    }

    ~DayState() = default;

    DayState(const DayState &) = delete; //删除拷贝构造函数
    DayState(DayState &&) = delete;
    DayState &operator=(const DayState &) = delete;
    DayState &operator=(DayState &&) = delete;
};
#endif