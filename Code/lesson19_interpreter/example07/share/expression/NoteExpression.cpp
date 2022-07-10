#include "../../include/expression/NoteExpression.h"

NoteExpression::NoteExpression()
{
    cout << "NoteExpression()构造函数" << endl;
}

NoteExpression::~NoteExpression()
{
    cout << "~NoteExpression()析构函数" << endl;
}

void NoteExpression::excute(const std::string &key, const std::string &value)
{
    std::string note = "";
    if (!key.empty())
    {
        if (key == "C")
        {
            note = "1";
        }
        else if (key == "D")
        {
            note = "2";
        }
        else if (key == "E")
        {
            note = "3";
        }
        else if (key == "F")
        {
            note = "4";
        }
        else if (key == "G")
        {
            note = "5";
        }
        else if (key == "A")
        {
            note = "6";
        }
        else if (key == "B")
        {
            note = "7";
        }
    }
    cout << "NoteExpression::excute():: note:" << note << endl;
}