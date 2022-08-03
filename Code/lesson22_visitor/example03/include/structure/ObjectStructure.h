#ifndef OBJECT_STRUCTURE_H
#define OBJECT_STRUCTURE_H

#include "../Global.h"
#include "../interface/IPerson.h"

/**
 * @brief 对象结构类
 *
 */
class ObjectStructure
{
private:
    std::shared_ptr<std::vector<std::shared_ptr<IPerson>>> persons = nullptr; //节点列表

public:
    ObjectStructure();
    ~ObjectStructure();
    void add(std::shared_ptr<IPerson> person);
    void display(std::shared_ptr<IAction> action);
};

#endif