#include "../../include/interface/ICommand.h"

ICommand::ICommand(std::shared_ptr<IBarbecuer> barbecure)
{
    this->barbecure = barbecure;
}
