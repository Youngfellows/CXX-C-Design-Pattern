#ifndef IPHONE_H
#define IPHONE_H

#include "../HandsetBrand.h"

/**
 * @brief 派生类: 苹果手机
 *
 */
class IPhone : public HandsetBrand
{
private:
public:
    IPhone() = default;
    IPhone(HandsetSoft *handsetSoft);
    ~IPhone();
    virtual void run() override; //实现run()函数
};
#endif