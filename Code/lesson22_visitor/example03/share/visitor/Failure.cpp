#include "../../include/visitor/Failure.h"

void Failure::getManConclusion(std::shared_ptr<IPerson> man)
{
    cout << "男人失败时，背后有个伟大的女人" << endl;
}

void Failure::getWomanConclusion(std::shared_ptr<IPerson> woman)
{
    cout << "女人失败时，背后有个没用的男人" << endl;
}