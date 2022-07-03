#ifndef HANDSET_ADDRESS_LIST_H
#define HANDSET_ADDRESS_LIST_H

#include "../Global.h"
#include "../HandsetSoft.h"

/**
 * @brief 派生类: 通讯录软件
 *
 */
class HandsetAddressList : public HandsetSoft
{
public:
    HandsetAddressList() = default;
    ~HandsetAddressList() = default;
    virtual void run() override; //实现run()函数
};
#endif