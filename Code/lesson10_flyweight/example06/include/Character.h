#ifndef CHARACTER_H
#define CHARACTER_H

#include "./ICharacter.h"

/**
 * @brief 实体类: 字符
 * 
 */
class Character : public ICharacter
{
    private:
        string symbol;//字符名称
        int weight;//字宽
        int height;//字高
        string color;//字体颜色
        
    public:
        Character(string symbol);
        ~Character();//默认析构函数
        virtual void setSize(int w,int h) override;//实现setSize()函数
        virtual void setCharColor(string color) override;//实现setCharColor()函数
        virtual void display() override;//实现display()函数
};
#endif