#include "../include/ExpressionFactory.h"

/**
 * @brief 通过简单工厂创建对象
 *
 * @param context
 * @return std::shared_ptr<IExpression>
 */
std::shared_ptr<IExpression> ExpressionFactory::create(std::shared_ptr<IContext> context)
{
    std::shared_ptr<IExpression> expression = nullptr;
    const std::string key = (context->get()).substr(0, 1);
    if (!key.empty())
    {
        if (key == "O")
        {
            expression = std::make_shared<ScaleExpression>();
        }
        else if (key == "C" || key == "D" || key == "E" || key == "F" || key == "G" || key == "A" || key == "B")
        {
            expression = std::make_shared<NoteExpression>();
        }
        else if (key == "T")
        {
            expression = std::make_shared<SpeedExpression>();
        }
    }

    return expression;
}
