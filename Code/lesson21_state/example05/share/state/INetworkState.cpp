#include "../../include/interface/INetworkState.h"

INetworkState *INetworkState::getNext()
{
    return this->next;
}
