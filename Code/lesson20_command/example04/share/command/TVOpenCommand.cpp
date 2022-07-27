#include "../../include/command/TVOpenCommand.h"

TVOpenCommand::TVOpenCommand(std::shared_ptr<ITelevision> television)
{
    cout << "TVOpenCommand()构造函数" << endl;
    this->television = television;
}

TVOpenCommand::~TVOpenCommand()
{
    cout << "~TVOpenCommand()析构函数" << endl;
}

void TVOpenCommand::execute()
{
    this->television->open();
}
