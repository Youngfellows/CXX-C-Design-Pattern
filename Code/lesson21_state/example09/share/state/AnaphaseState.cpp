#include "../../include/state/AnaphaseState.h"

void AnaphaseState::getCurrentState(IWar *war)
{
    int days = war->getDays();
    cout << "AnaphaseState::getCurrentState():: days:" << days << endl;
    if (days < 10)
    {
        // cout << "ProphaseState::getCurrentState():: 战争前期 ..." << endl;
        war->setState(std::make_shared<ProphaseState>());
        war->getState();
    }
    else if (days < 20)
    {
        // cout << "MetaphaseState::getCurrentState():: 战争中期 ..." << endl;
        war->setState(std::make_shared<MetaphaseState>()); //切换状态
        war->getState();
    }
    else if (days < 30)
    {
        cout << "AnaphaseState::getCurrentState():: 战争后期 ..." << endl;
        // war->setState(std::make_shared<AnaphaseState>()); //切换状态
        // war->getState();
    }
    else
    {
        // cout << "EndState::getCurrentState():: 战争结束 ..." << endl;
        war->setState(std::make_shared<EndState>()); //切换状态
        war->getState();
    }
}
