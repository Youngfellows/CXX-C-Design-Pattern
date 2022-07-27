#include "../../include/command/TVChangeCommand.h"

TVChangeCommand::TVChangeCommand(std::shared_ptr<ITelevision> television)
{
    cout << "TVChangeCommand()构造函数" << endl;
    this->television = television;
}

TVChangeCommand::~TVChangeCommand()
{
    cout << "~TVChangeCommand()析构函数" << endl;
}

void TVChangeCommand::execute()
{
    this->television->changeChannel();
}
