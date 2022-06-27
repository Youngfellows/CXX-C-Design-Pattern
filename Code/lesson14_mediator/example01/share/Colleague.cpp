#include "../include/Colleague.h"

Colleague::Colleague(std::shared_ptr<Mediator> mediator)
{
    cout << "Colleague()构造函数" << endl;
    this->mediator = mediator;
}
