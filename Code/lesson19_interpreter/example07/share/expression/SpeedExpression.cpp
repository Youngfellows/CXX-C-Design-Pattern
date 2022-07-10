#include "../../include/expression/SpeedExpression.h"

SpeedExpression::SpeedExpression()
{
    cout << "SpeedExpression()构造函数" << endl;
}

SpeedExpression::~SpeedExpression()
{
    cout << "~SpeedExpression()析构函数" << endl;
}

void SpeedExpression::excute(const std::string &key, const std::string &value)
{
    std::string speed = "";
    double dSpeed = std::stod(value);
    if (dSpeed < 500)
    {
        speed = "快速";
    }
    else if (dSpeed > 1000)
    {
        speed = "慢速";
    }
    else
    {
        speed = "中速";
    }

    cout << "SpeedExpression::excute(): speed:" << speed << endl;
}