#include "../../include/invorker/NormalSalesclerk.h"

NormalSalesclerk::NormalSalesclerk(std::shared_ptr<ICommand> command)
{
    cout << "NormalSalesclerk()构造函数" << endl;
    this->command = command;
}

NormalSalesclerk::~NormalSalesclerk()
{
    cout << "~NormalSalesclerk()析构函数" << endl;
}

void NormalSalesclerk::setCommand(std::shared_ptr<ICommand> command)
{
    this->command = command;
}

void NormalSalesclerk::sail()
{
    this->command->sail();
}