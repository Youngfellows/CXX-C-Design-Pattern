#include "../include/CompoundGraphic.h"


CompoundGraphic::CompoundGraphic()
{
    cout << "CompoundGraphic()构造函数" << endl;
}

CompoundGraphic::~CompoundGraphic()
{
    cout << "~CompoundGraphic()析构函数" << endl;
}

       
/**
 * @brief 重写move2somewhere()函数
 * 
 * @param x x坐标
 * @param y y坐标
 */
void CompoundGraphic::move2somewhere(int x,int y)
{
    cout << "CompoundGraphic::move2somewhere():: ..." << endl;
    map<int,Graphic *>::iterator iter;
    for(iter = this->childred.begin(); iter != this->childred.end(); iter++)
    {
        iter->second->move2somewhere(x,y);//调用子节点
    }
}

/**
 * @brief 绘制图形
 * 
 */
void CompoundGraphic::draw()
{
    cout << "CompoundGraphic::draw():: ..." << endl;
    map<int,Graphic *>::iterator iter;
    for(iter = this->childred.begin(); iter != this->childred.end(); iter++)
    {
        iter->second->draw();//调用子节点
    }
}

/**
 * @brief 添加叶子节点
 * 
 * @param id 图表id
 * @param child 图表指针
 */
void CompoundGraphic::add(int id,Graphic *child)
{
    cout << "CompoundGraphic::add():: ..." << endl;
    this->childred[id] = child;
}

/**
 * @brief 移除叶子节点
 * 
 * @param id 图表id
 */
void CompoundGraphic::remove(int id)
{
    cout << "CompoundGraphic::remove():: ..." << endl;
    this->childred.erase(id);
}