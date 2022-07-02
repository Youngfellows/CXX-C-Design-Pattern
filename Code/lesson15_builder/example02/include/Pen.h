#ifndef PEN_H
#define PEN_H

#include "./Global.h"

/**
 * @brief 实体类: 画笔
 *
 */
class Pen
{
private:
    std::string brand; //画笔品牌
    double font;       //字体大小

public:
    Pen() = default;
    Pen(std::string brand, double font);
    ~Pen() = default;
    void use();
};

#endif