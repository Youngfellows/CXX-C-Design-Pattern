#ifndef ANDROID_H
#define ANDROID_H

#include "../HandsetBrand.h"

/**
 * @brief 派生类: 安卓手机
 *
 */
class Android : public HandsetBrand
{
private:
public:
    Android() = default;
    Android(HandsetSoft *handsetSoft);
    ~Android();
    virtual void run() override; //实现run()函数
};

#endif