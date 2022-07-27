#ifndef BARBECUER_H
#define BARBECUER_H

#include "../Global.h"
#include "../interface/IBarbecuer.h"

/**
 * @brief 派生类: 烧烤的人
 *
 */
class Barbecuer : public IBarbecuer
{
private:
    std::string name;  //烧烤人名字
    std::string store; //商铺名称
public:
    Barbecuer(std::string name, std::string store);
    ~Barbecuer();
    virtual void bakeMutton() override;      //实现bakeMutton()函数
    virtual void bakeChickenWing() override; //实现bakeChickenWing()函数
};

#endif