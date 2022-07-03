#include "../../include/product/NormalDisplay.h"

NormalDisplay::NormalDisplay(IDisplay *displayImpl)
{
    cout << "NormalDisplay()构造函数" << endl;
    this->displayImpl = displayImpl;
}

void NormalDisplay::open()
{
    this->displayImpl->rawOpen();
}

void NormalDisplay::print()
{
    this->displayImpl->rawPrint();
}

void NormalDisplay::close()
{
    this->displayImpl->rawClose();
}

/**
 * @brief 负责显示逻辑
 *
 */
void NormalDisplay::display()
{
    this->open();
    this->print();
    this->close();
}