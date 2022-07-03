#include "../../include/product/StringDisplay.h"

StringDisplay::StringDisplay(std::string text)
{
    this->text = text;
}

void StringDisplay::printLine()
{
    cout << "+";
    for (long unsigned int i = 0; i < this->text.length(); i++)
    {
        cout << "-";
    }
    cout << "+" << endl;
}

void StringDisplay::rawOpen()
{
    this->printLine();
}

void StringDisplay::rawPrint()
{
    cout << "|" << this->text << "|" << endl;
}

void StringDisplay::rawClose()
{
    this->printLine();
}