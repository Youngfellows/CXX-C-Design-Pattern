#include "../include/CareTaker.h"

CareTaker::CareTaker(std::shared_ptr<Originator> originator)
{
    cout << "CareTaker()构造函数" << endl;
    this->originator = originator;
    this->history = std::make_shared<std::vector<std::shared_ptr<Memento>>>();
}

CareTaker::~CareTaker()
{
    cout << "~CareTaker()析构函数" << endl;
    this->history->clear(); //清空容器
}

/**
 * @brief 备份数据到备忘录列表
 *
 */
void CareTaker::save()
{
    if (this->originator != nullptr)
    {
        std::shared_ptr<Memento> memento = this->originator->createSnapshot(); //获取要备份的数据
        this->history->push_back(memento);                                     //把备份数据添加到历史记录
    }
}

/**
 * @brief 从备忘录恢复最近一次历史记录
 *
 */
void CareTaker::undo()
{
    if (this->originator != nullptr)
    {
        if (!this->history->empty())
        {
            std::shared_ptr<Memento> memento = this->history->back(); //获取最近一次历史备份数据
            this->originator->resotre(memento);              //恢复数据
            this->history->pop_back();                                //把备份数据从历史记录表中删除
        }
    }
}

/**
 * @brief 从备忘录恢复第index次历史记录
 *
 */
void CareTaker::rollback(unsigned int index)
{
    if (this->originator != nullptr)
    {
        if ((!this->history->empty()) && (index < this->history->size()))
        {
            std::shared_ptr<Memento> memento = this->history->at(index);                                                    //获取第index次历史备份数据
            this->originator->resotre(memento);                                                                    //恢复数据
            this->history->erase(std::remove(this->history->begin(), this->history->end(), memento), this->history->end()); //把备份数据从历史记录表中删除
        }
    }
}