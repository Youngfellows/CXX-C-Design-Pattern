#include "../include/Editor.h"

Editor::Editor(std::string text, double x, double y, double selectionWidth)
{
    cout << "Editor()构造函数" << endl;
    this->text = text;
    this->x = x;
    this->y = y;
    this->selectionWidth = selectionWidth;
}

Editor::~Editor()
{
    cout << "~Editor()析构函数" << endl;
}

void Editor::setText(std::string text)
{
    this->text = text;
}

void Editor::setCursor(double x, double y)
{
    this->x = x;
    this->y = y;
}

void Editor::setSelectionWidth(double width)
{
    this->selectionWidth = width;
}

/**
 * @brief 创建备忘录,并保存数据到备忘录
 *
 * @return std::shared_ptr<Memento> 返回保存数据的备忘录
 */
std::shared_ptr<Memento> Editor::createSnapshot()
{
    std::shared_ptr<Memento> snapshot(new Snapshot(text, x, y, selectionWidth));
    return snapshot;
}

/**
 * @brief 从备忘录恢复数据
 *
 * @param snapshot 保存数据的备忘录
 */
void Editor::resotre(std::shared_ptr<Memento> snapshot)
{
    this->text = snapshot->getText();
    this->x = snapshot->getCurX();
    this->y = snapshot->getCurY();
    this->selectionWidth = snapshot->getSelectionWidth();
}

void Editor::display()
{
    cout << "Editor::display():: 文本内容: " << this->text << endl;
    cout << "Editor::display():: 光标位置: (" << this->x << "," << this->y << ")" << endl;
    cout << "Editor::display():: 选中长度: " << this->selectionWidth << endl;
    cout << endl;
}