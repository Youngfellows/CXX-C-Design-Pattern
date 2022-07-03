#ifndef HANDSET_BRAND_H
#define HANDSET_BRAND_H

#include "./Global.h"
#include "./HandsetSoft.h"

/**
 * @brief 抽象类: 手机品牌抽象
 *
 */
class HandsetBrand
{
protected:
    HandsetSoft *handsetSoft = nullptr; //手机软件

public:
    HandsetBrand() = default;
    HandsetBrand(HandsetSoft *handsetSoft);
    virtual ~HandsetBrand() = default;

    /**
     * @brief 设置手机软件
     *
     * @param handsetSoft 手机软件
     */
    void setHandsetSoft(HandsetSoft *handsetSoft);

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 运行手机软件
     *
     */
    virtual void run() = 0;
};
#endif