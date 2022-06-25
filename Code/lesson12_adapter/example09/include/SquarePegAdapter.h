#ifndef SQUARE_PEG_ADAPTER_H
#define SQUARE_PEG_ADAPTER_H

#include "./RoundPeg.h"
#include "./SquarePeg.h"

/**
 * @brief 方钉适配器: 该适配器能让客户端将方钉放入圆孔中
 * 
 */
class SquarePegAdapter : public RoundPeg 
{
    public:

        explicit SquarePegAdapter(SquarePeg* sp) : square_peg_(sp) 
        {
            cout << "SquarePegAdapter()构造函数,方钉适配器" << endl;
        }

        ~SquarePegAdapter()
        {
            cout << "~SquarePegAdapter()析构函数" << endl;
            if(this->square_peg_ != nullptr)
            {
                delete this->square_peg_;
                this->square_peg_ = nullptr;
            }
        }
        
        /**
         * @brief 获取方钉半径
         * 
         * @return int 返回方钉半径
         */
        int get_radius() override 
        {
            return square_peg_->get_width() * sqrt(2) / 2;
        }

    private:
        SquarePeg* square_peg_ = nullptr;//方钉
};


#endif