#ifndef VENDOR_H
#define VENDOR_H

#include "../Global.h"
#include "../interface/IVendor.h"

/**
 * @brief 派生类: 小商贩
 *
 */
class Vendor : public IVendor
{
private:
    std::string name;  //姓名
    std::string sex;   //性别
    int age;           //年龄
    std::string store; //店铺

public:
    Vendor(std::string name, std::string sex, int age, std::string store);
    ~Vendor();
    virtual void sailBanana() override;
    virtual void sailApple() override;
};
#endif