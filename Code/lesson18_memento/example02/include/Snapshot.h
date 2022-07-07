#ifndef SNAPSHOT_H
#define SNAPSHOT_H

#include "./Global.h"
#include "./interface/Memento.h"
#include "./Editor.h"

//先声明类,后面再定义
class Editor;

/**
 * @brief 派生类: 备忘录的具体实现,创建快照
 *
 */
class Snapshot : public Memento
{
private:
    std::string text;      //文本
    double x;              //光标x坐标
    double y;              //光标y坐标
    double selectionWidth; //选中滚动条长度

private:
    friend class Editor; //声明Editor为Snapshot类的友元类,在Editor中可以访问Snapshot的私有数据
    Snapshot(std::string text, int x, int y, double width);
    virtual std::string getText() override;      //实现getText()函数
    virtual double getCurX() override;           //实现getCurX()函数
    virtual double getCurY() override;           //实现getCurY()函数
    virtual double getSelectionWidth() override; //实现getSelectionWidth()函数

public:
    ~Snapshot();
};
#endif