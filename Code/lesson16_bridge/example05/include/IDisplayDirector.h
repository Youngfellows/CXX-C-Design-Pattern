#ifndef IDISPLAY_DIRECTOR_H
#define IDISPLAY_DIRECTOR_H

/**
 * @brief 抽象类: 抽象的显示负责类
 *
 */
class IDisplayDirector
{
public:
    virtual ~IDisplayDirector() = default;
    virtual void open() = 0;    //开始
    virtual void print() = 0;   //打印
    virtual void close() = 0;   //关闭
    virtual void display() = 0; //显示
};
#endif