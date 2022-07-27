#include "../../include/invorker/SeniorSalesclerk.h"

SeniorSalesclerk::SeniorSalesclerk()
{
    this->commands = std::make_shared<std::vector<std::shared_ptr<ICommand>>>();
}

SeniorSalesclerk::SeniorSalesclerk(std::shared_ptr<ICommand> command)
{
    cout << "SeniorSalesclerk()构造函数" << endl;
    this->commands = std::make_shared<std::vector<std::shared_ptr<ICommand>>>();
}

SeniorSalesclerk::~SeniorSalesclerk()
{
    cout << "~SeniorSalesclerk()析构函数" << endl;
}

void SeniorSalesclerk::setCommand(std::shared_ptr<ICommand> command)
{
    this->commands->push_back(command);
}

void SeniorSalesclerk::sail()
{
    for (auto iter = this->commands->begin(); iter != this->commands->end(); iter++)
    {
        (*iter)->sail();
    }
}