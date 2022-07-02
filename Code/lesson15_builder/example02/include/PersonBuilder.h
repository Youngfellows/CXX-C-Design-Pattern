#ifndef PERSON_BUILDER_H
#define PERSON_BUILDER_H

#include "./Global.h"
#include "./Person.h"

/**
 * @brief 抽象类: 建造者抽象
 * @brief 创造人的建造者抽象
 */
class PersonBuilder
{
public:
    virtual ~PersonBuilder() = default;
    virtual void useTool() = 0;                      //使用工具,抽象接口
    virtual void createHead() = 0;                   //创建头,抽象接口
    virtual void createHand() = 0;                   //创建手,抽象接口
    virtual void createBody() = 0;                   //创建身体,抽象接口
    virtual void createFoot() = 0;                   //创建脚,抽象接口
    virtual std::shared_ptr<Person> getPerson() = 0; //返回创建好的人,抽象接口
};
#endif