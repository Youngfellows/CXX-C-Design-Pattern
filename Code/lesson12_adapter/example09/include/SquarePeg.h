#ifndef SQUARE_PEG_H
#define SQUARE_PEG_H

#include "./Global.h"

/**
 * @brief 方钉: 适配者类, 即和客户端不兼容的类
 * 
 */
class SquarePeg {

    public:
        explicit SquarePeg(int w) : width_(w) 
        {
            cout << "SquarePeg()构造函数,宽为" << w << "的方钉" << endl;
        }

        virtual ~SquarePeg() = default;//默认析构函数

        /**
         * @brief 返回方钉的宽
         * 
         * @return int 返回方钉的宽
         */
        int get_width() {
            return width_;//方钉的宽
        }

    private:
        int width_;
};

#endif 