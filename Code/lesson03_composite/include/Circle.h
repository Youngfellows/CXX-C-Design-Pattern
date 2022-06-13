#ifndef CIRCLE_H
#define CIRCLE_H

#include "./Global.h"
#include "./Graphic.h"

/**
 * @brief 叶节点类代表组合的中断对象。叶节点对象中不能包含任何子对象。
 *        叶节点对象通常会完成实际的工作, 组合对象则仅会将工作委派给自己的子部件。
 * 点
 */
class Circle :public Graphic
{
    private:
        int x;//X坐标
        int y;//Y坐标
        int radius;//半径

    public:
        Circle(int x,int y,int r);
        virtual ~Circle();

        /**
         * @brief 重写move2somewhere()函数
         * 
         * @param x x坐标
         * @param y y坐标
         */
        void move2somewhere(int x,int y) override;

        /**
         * @brief 绘制图形
         * 
         */
        void draw() override;

};
#endif