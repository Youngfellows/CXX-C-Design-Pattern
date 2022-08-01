#include "../../include/state/HighState.h"

void HighState::checkState()
{
    if (point_ < 100)
    {
        account_->set_state(std::make_shared<PrimaryState>(this));
    }
    else if (point_ < 1000)
    {
        account_->set_state(std::make_shared<HighState>(this));
    }
}
