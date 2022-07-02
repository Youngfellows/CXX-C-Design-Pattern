#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "./PersonBuilder.h"
#include "./Person.h"
#include "./Global.h"

/**
 * @brief 抽象负责任
 *
 */
class Director
{
public:
    virtual ~Director() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设计建造者
     *
     * @param builder 创造人的建造者
     */
    virtual void setBuilder(std::shared_ptr<PersonBuilder> builder) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 赋值人赋值创建人
     *
     * @return std::shared_ptr<Person> 返回创建好的人
     */
    virtual std::shared_ptr<Person> createPerson() = 0;
};

#endif