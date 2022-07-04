#include "../include/ISwitch.h"

ISwitch::ISwitch(IElectricalEquipment *eEquipment)
{
    this->eEquipment = eEquipment;
}