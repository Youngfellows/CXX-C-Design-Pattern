#ifndef ROUND_HOLE_H
#define ROUND_HOLE_H

#include "./Global.h"
#include "./RoundPeg.h"

/**
 * @brief 圆孔: 客户端类
 * 
 */
class RoundHole
{
     private:
        int radius_;//圆孔半径

    public:
        explicit RoundHole(int r) : radius_(r) 
        {
            cout << "RoundHole()构造函数,圆孔半径:" << r << endl;
        }

        /**
         * @brief 获取圆孔半径
         * 
         * @return int 
         */
        int get_radius() 
        {
            return radius_;
        }

        /**
         * @brief 圆孔是否能放下圆钉子
         * 
         * @param rp 圆订
         * @return true 能放下圆钉子
         * @return false 不能放下圆钉子
         */
        bool isFit(RoundPeg* rp) 
        {
            return radius_ >= rp->get_radius();
        }
};

#endif