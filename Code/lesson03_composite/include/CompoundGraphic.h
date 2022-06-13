#ifndef COMPOUND_GRAPHIC_H
#define COMPOUND_GRAPHIC_H

#include "./Global.h"
#include "./Graphic.h"

/**
 * @brief 组合类表示可能包含子项目的复杂组件。组合对象通常会将实际工作委派给子项目，然后“汇总”结果。
 * 
 */
class CompoundGraphic : public Graphic
{
    private:
        //key是图表id, value是图表指针
        map<int,Graphic *> childred;

    public:
        CompoundGraphic();
        virtual  ~CompoundGraphic();
        
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

        /**
         * @brief 添加叶子节点
         * 
         * @param id 图表id
         * @param child 图表指针
         */
        void add(int id,Graphic *child);

        /**
         * @brief 移除叶子节点
         * 
         * @param id 图表id
         */
        void remove(int id);

};
#endif