#ifndef HOUSE_DIRECTOR_H
#define HOUSE_DIRECTOR_H

#include "./Builder.h"
#include "./Director.h"

/**
 * @brief 派生类: 房子设计师(指挥者)
 *
 */
class HouseDirector : public Director
{
private:
    std::shared_ptr<Builder> builder; //房子建造者

public:
    HouseDirector() = default;
    HouseDirector(std::shared_ptr<Builder> builder);
    ~HouseDirector();
    virtual void setBuilder(std::shared_ptr<Builder> builder) override;//实现setBuilder()函数
    virtual void construct() override; //实现construct()函数
    virtual std::shared_ptr<House> getHouse() override;//实现getHouse()函数
};
#endif