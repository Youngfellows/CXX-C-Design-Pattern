#include "../../include/expression/Expression.h"

void Expression::interprete(Context *context)
{
    std::stringstream ss;
    std::string key;
    double value;
    std::string remain_text = context->getText();
    cout << "1,remain_text:" << remain_text << endl;
    ss << remain_text;
    ss >> key >> value;
    cout << "key:" << key << endl;
    cout << "value:" << value << endl;
    remain_text = remain_text.substr(remain_text.find(" ") + 1);
    cout << "2,remain_text:" << remain_text << endl;
    remain_text = remain_text.substr(remain_text.find(" ") + 1);
    cout << "3,remain_text:" << remain_text << endl;
    if (remain_text.length() < 3)
    {
        remain_text = "";
    }
    context->setText(remain_text);
    excute(key, value);
}