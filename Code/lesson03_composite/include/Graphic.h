#ifndef GRAPHIC_H
#define GRAPHIC_H

/**
 * @brief 组件接口会声明组合中简单和复杂对象的通用操作, C++中实现成抽象基类。
 * 
 */
class Graphic
{
    public:

        /**
         * @brief 移动到位置(x,y)
         * 
         * @param x X坐标
         * @param y y坐标
         */
        virtual void move2somewhere(int x,int y) = 0;


        /**
         * @brief 绘制形状
         * 
         */
        virtual void draw() = 0;
};

#endif