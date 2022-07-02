#ifndef THIN_BUILDER_H
#define THIN_BUILDER_H

#include "../PersonBuilder.h"
#include "../person/ThinPerson.h"
#include "../Pen.h"
#include "../Canvas.h"

/**
 * @brief 派生类: 建造者具体实现,瘦子建造者
 *
 */
class ThinBuilder : public PersonBuilder
{
private:
    std::shared_ptr<Pen> pen = nullptr;                   //画笔
    std::shared_ptr<Canvas> canvas = nullptr;             //画布
    std::shared_ptr<Person> person;                       //瘦子
    virtual void useTool() override;                      //实现useTool()函数
    virtual void createHead() override;                   //实现createHead()函数
    virtual void createHand() override;                   //实现createHand()函数
    virtual void createBody() override;                   //实现createBody()函数
    virtual void createFoot() override;                   //实现createFoot()函数
    virtual std::shared_ptr<Person> getPerson() override; //实现getPerson()函数

public:
    ThinBuilder();
    ~ThinBuilder();
};
#endif