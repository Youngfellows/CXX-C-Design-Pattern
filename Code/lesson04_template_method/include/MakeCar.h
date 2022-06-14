#ifndef MAKE_CAR_H
#define MAKE_CAR_H

#include "./Global.h"

/**
 * @brief MakeCar抽象类 - 造车
 * 
 */
class MakeCar
{
    private:

        /**
         * @brief 造车头 - 纯虚函数 - 接口
         * 
         */
        virtual void makeHead() = 0;

        /**
         * @brief 造车身 - 纯虚函数 - 接口
         * 
         */
        virtual void makeBody() = 0;

        /**
         * @brief 造车尾 - 纯虚函数 - 接口
         * 
         */
        virtual void makeTail() = 0;

    public:

        /**
         * @brief 模板函数 把业务逻辑给做好
         * 
         */
        void make();
};

#endif