#ifndef I_GIVE_GIFT_H
#define I_GIVE_GIFT_H

#include "./Global.h"

/**
 * @brief 抽象类接口: 赠送礼物
 * 
 */
class IGiveGift
{
    public:
        virtual ~IGiveGift();
        
        /**
         * @brief 抽象接口: 送娃娃
         * 
         */
        virtual void giveDolls() = 0;

        /**
         * @brief  抽象接口: 送鲜花
         * 
         */
        virtual void giveFlowers() = 0;
};
#endif