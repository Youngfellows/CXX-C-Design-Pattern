#include "../../include/expression/Expression.h"

/**
 * @brief 解析上下文环境,并获取key/value
 *
 * @param context 上下文环境
 */
void Expression::interprete(std::shared_ptr<IContext> context)
{
    if ((context->get()).empty())
    {
        return;
    }
    std::string key = (context->get()).substr(0, (context->get()).find_first_of(' ')); //获取key
    cout << "Expression::interprete:: key:" << key << endl;
    std::string tContext = (context->get()).substr((context->get()).find_first_of(' ') + 1); //获取空格后的字符串内容
    std::string value = tContext.substr(0, tContext.find_first_of(' '));                     //获取value
    cout << "Expression::interprete:: value:" << value << endl;

    //获取剩下的字符串,设置给上下文环境
    tContext = tContext.substr(tContext.find_first_of(' ') + 1); //获取剩下的字符串
    context->set(tContext);
    cout << "Expression::interprete:: tContext:" << context->get() << endl;

    //交给子类执行
    excute(key, value);
}