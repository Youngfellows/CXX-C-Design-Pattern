#ifndef PURSUIT_H
#define PURSUIT_H

#include "./IGiveGift.h"
#include "./SchoolGirl.h"

/**
 * @brief 实体类: 追求女生
 * 
 */
class Pursuit : public IGiveGift
{
    private:
        std::shared_ptr<SchoolGirl> mm = nullptr;//妹妹

    public:
        Pursuit(std::shared_ptr<SchoolGirl> mm);
        ~Pursuit();
        virtual void giveDolls() override;//覆写giveDolls()函数
        virtual void giveFlowers() override;//覆写giveFlowers()函数
};
#endif