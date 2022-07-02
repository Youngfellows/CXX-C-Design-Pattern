#ifndef FAT_PERSON_H
#define FAT_PERSON_H

#include "../Global.h"
#include "../Person.h"

/**
 * @brief 派生类: 胖子
 *
 */
class FatPerson : public Person
{
private:
    std::string name;

public:
    FatPerson(std::string name);
    ~FatPerson();
    virtual void drawHead() override; //实现drawHead()函数
    virtual void drawHand() override; //实现drawHand()函数
    virtual void drawBody() override; //实现drawBody()函数
    virtual void drawFoot() override; //实现drawFoot()函数
};
#endif