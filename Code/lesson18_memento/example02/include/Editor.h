#ifndef EDITOR_H
#define EDITOR_H

#include "./interface/Originator.h"
#include "./Snapshot.h"

/**
 * @brief 派生类: 具体数据愿生者,编辑器
 *
 */
class Editor : public Originator
{
private:
    std::string text;      //文本
    double x;              //光标x坐标
    double y;              //光标y坐标
    double selectionWidth; //选中滚动条长度

public:
    Editor() = default;
    Editor(std::string text, double x, double y, double selectionWidth);
    ~Editor();
    virtual void setText(std::string text) override;                  //实现setText()函数
    virtual void setCursor(double x, double y) override;              //实现setCursor()函数
    virtual void setSelectionWidth(double width) override;            //实现setSelectionWidth()函数
    virtual std::shared_ptr<Memento> createSnapshot() override;       //实现createSnapshot()函数
    virtual void resotre(std::shared_ptr<Memento> snapshot) override; //实现resotre()函数
    virtual void display() override;                                  //实现display()函数
};
#endif