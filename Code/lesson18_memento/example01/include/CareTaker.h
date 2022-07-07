#ifndef CARETAKER_H
#define CARETAKER_H

#include "./Global.h"
#include "./Memento.h"
#include "./Originator.h"

/**
 * @brief 管理者: 负责在适当的时间保存/恢复Originator对象的状态
 *
 */
class CareTaker
{
private:
    std::shared_ptr<Originator> originator = nullptr; //数据产生者
    // std::shared_ptr<Memento> memento = nullptr;                               //备忘录
    std::shared_ptr<std::vector<std::shared_ptr<Memento>>> history = nullptr; //备忘录历史

public:
    CareTaker(std::shared_ptr<Originator> originator);
    ~CareTaker();
    void save();              //备份数据到备忘录列表
    void undo();              //从备忘录恢复最近一次历史记录
    void rollback(unsigned int index); //从备忘录恢复第index次历史记录
};
#endif