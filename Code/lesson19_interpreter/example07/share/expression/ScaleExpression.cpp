#include "../../include/expression/ScaleExpression.h"

ScaleExpression::ScaleExpression()
{
    cout << "ScaleExpression()构造函数" << endl;
}

ScaleExpression::~ScaleExpression()
{
    cout << "~ScaleExpression()析构函数" << endl;
}

void ScaleExpression::excute(const std::string &key, const std::string &value)
{
    std::string scale = "";
    switch (std::stoi(value))
    {
    case 1:
        scale = "低音";
        break;
    case 2:
        scale = "中音";
        break;
    case 3:
        scale = "高音";
        break;
    }
    cout << "ScaleExpression::excute(): scale:" << scale << endl;
}