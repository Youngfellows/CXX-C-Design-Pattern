#include "../../include/element/Woman.h"

void Woman::accept(std::shared_ptr<IAction> action)
{
    action->getWomanConclusion(shared_from_this());
}
