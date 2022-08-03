#include "../../include/visitor/Success.h"

void Success::getManConclusion(std::shared_ptr<IPerson> man)
{
    cout << "男人成功时，背后有个伟大的女人" << endl;
}

void Success::getWomanConclusion(std::shared_ptr<IPerson> woman)
{
    cout << "女人成功时，背后有个没用的男人" << endl;
}
