#include "./include/Sample.h"

/**
 * @brief 返回上下文环境中其中之一是男人的解释器
 *
 * @return std::shared_ptr<Expression> 返回解释器
 */
std::shared_ptr<Expression> getMaleExpression()
{
    std::shared_ptr<Expression> yangguo = std::make_shared<TerminalExpression>("杨过");
    std::shared_ptr<Expression> xiaolongnv = std::make_shared<TerminalExpression>("小龙女");
    return std::make_shared<OrExpression>(yangguo, xiaolongnv);
}

/**
 * @brief 返回上下文环境中的都是已经结婚女人的解释器
 *
 * @return std::shared_ptr<Expression> 返回解释器
 */
std::shared_ptr<Expression> getMarriedWomanExpression()
{
    std::shared_ptr<Expression> zhaomin = std::make_shared<TerminalExpression>("赵敏");
    std::shared_ptr<Expression> qiudie = std::make_shared<TerminalExpression>("慕容秋荻");
    return std::make_shared<AndExpression>(zhaomin, qiudie);
}

void test1()
{
    cout << "test1():: ..." << endl;
    //解释器模式
    std::shared_ptr<Expression> isMaleExpression = getMaleExpression();                 //或解释器
    std::shared_ptr<Expression> isMarriedWomanExpression = getMarriedWomanExpression(); //与解释器

    //判断上下文环境是否满足 或解释器
    std::string context = "中秋节,杨过要去绝情谷找小龙女";
    bool result = isMaleExpression->interpret(context);
    cout << "result=" << result << endl;

    context = "端午节,杨过要去找郭襄";
    result = isMaleExpression->interpret(context);
    cout << "result=" << result << endl;

    context = "劳动节,张无忌去峨眉山找周芷若";
    result = isMaleExpression->interpret(context);
    cout << "result=" << result << endl;

    context = "赵敏的男朋友是张无忌,慕容秋荻和谢晓峰结婚了";
    result = isMarriedWomanExpression->interpret(context);
    cout << "result=" << result << endl;

    context = "周芷若其实是喜欢张无忌的,慕容秋荻和谢晓峰结婚了";
    result = isMarriedWomanExpression->interpret(context);
    cout << "result=" << result << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}