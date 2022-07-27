#include "../../include/command/BakeChikenWingCommand.h"

BakeChikenWingCommand::~BakeChikenWingCommand()
{
    cout << "~BakeChikenWingCommand()析构函数" << endl;
}

void BakeChikenWingCommand::makingBarbecue()
{
    this->barbecure->bakeChickenWing();
}
