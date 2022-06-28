#include "../include/Colleague.h"

/**
 * @brief 构造函数
 * 
 * @param mediator 中介者对象
 * @param id ID号
 */
Colleague::Colleague(Mediator *mediator, unsigned int id)
{
    this->id = id;
    this->mediator = mediator;
}

/**
 * @brief 获取ID号
 * 
 * @return unsigned int 返回ID号
 */
unsigned int Colleague::getId()
{
    return this->id;
}