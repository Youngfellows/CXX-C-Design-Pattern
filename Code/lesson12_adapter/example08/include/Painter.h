#ifndef PAINTER_H
#define PAINTER_H

/**
 * @brief 抽象类: 画家
 * 
 */
class Painter
{
    public:
    
        virtual ~Painter() = default;

        /**
         * @brief 抽象接口,纯虚函数: 画粗线条
         * 
         */
        virtual void printStrong() = 0;
        
        /**
         * @brief 抽象接口,纯虚函数: 画细线条
         * 
         */
        virtual void printWeak() = 0;
};

#endif