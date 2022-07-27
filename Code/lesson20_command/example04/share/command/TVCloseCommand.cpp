#include "../../include/command/TVCloseCommand.h"

TVCloseCommand::TVCloseCommand(std::shared_ptr<ITelevision> television)
{
    cout << "TVCloseCommand()构造函数" << endl;
    this->television = television;
}

TVCloseCommand::~TVCloseCommand()
{
    cout << "~TVCloseCommand()析构函数" << endl;
}

void TVCloseCommand::execute()
{
    this->television->close();
}