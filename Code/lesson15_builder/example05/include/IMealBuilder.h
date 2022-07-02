#ifndef IMEAL_BUILDER_H
#define IMEAL_BUILDER_H

#include "./IMeal.h"

/**
 * @brief 抽象类: 抽象创建者
 *
 */
class IMealBuilder
{
public:
    virtual ~IMealBuilder() = default;

    /**
     * @brief  纯虚函数,抽象接口
     * @brief  制作蔬菜美食
     *
     * @return std::shared_ptr<IMeal> 返回美食
     */
    virtual std::shared_ptr<IMeal> prepareVegMeal() = 0;

    /**
     * @brief  纯虚函数,抽象接口
     * @brief  制作无蔬菜美食
     *
     * @return std::shared_ptr<IMeal> 返回美食
     */
    virtual std::shared_ptr<IMeal> prepareNonVegMeal() = 0;
};

#endif