#include "../../include/element/Man.h"

void Man::accept(std::shared_ptr<IAction> action)
{
    action->getManConclusion(shared_from_this());
}