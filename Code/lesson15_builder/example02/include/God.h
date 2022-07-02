#ifndef GOD_H
#define GOD_H

#include "./Director.h"
#include "./PersonBuilder.h"

/**
 * @brief 派生类: 上帝(创造人的负责任)
 *
 */
class God : public Director
{
private:
    std::shared_ptr<PersonBuilder> builder = nullptr; //创建者

public:
    God() = default; //默认构造函数
    God(std::shared_ptr<PersonBuilder> builder);
    ~God();
    virtual void setBuilder(std::shared_ptr<PersonBuilder> builder) override; //实现setBuilder()函数
    virtual std::shared_ptr<Person> createPerson() override;                  //实现createPerson()函数
};
#endif