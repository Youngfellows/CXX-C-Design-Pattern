#ifndef ROUND_PEG_H
#define ROUND_PEG_H

/**
 * @brief 圆钉: 客户端接口, 在C++中定义成抽象基类
 * 
 */
class RoundPeg 
{

    public:

        /**
         * @brief 默认析构函数
         * 
         */
        virtual ~RoundPeg() = default;

        /**
         * @brief 纯虚函数,抽象接口: 获取圆钉的半径
         * 
         * @return int 返回圆钉的半径
         */
        virtual int get_radius() = 0;
};

#endif