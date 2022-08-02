#include "../../include/state/EndState.h"

void EndState::getCurrentState(IWar *war)
{
    int days = war->getDays();
    cout << "EndState::getCurrentState():: days:" << days << endl;
    if (days < 10)
    {
        war->setState(std::make_shared<ProphaseState>());
        war->getState();
    }
    else if (days < 20)
    {
        war->setState(std::make_shared<MetaphaseState>());
        war->getState();
    }
    else if (days < 30)
    {
        war->setState(std::make_shared<AnaphaseState>());
        war->getState();
    }
    else
    {
        cout << "EndState::getCurrentState():: 战争结束 ..." << endl;
    }
}
