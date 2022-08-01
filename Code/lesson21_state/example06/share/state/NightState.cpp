#include "../../include/state/NightState.h"

void NightState::doColock(IContext *ctx, int hour)
{
    if (9 <= hour || hour < 17)
    {
        ctx->stateChange(&DayState::GetInstance());
    }
}
