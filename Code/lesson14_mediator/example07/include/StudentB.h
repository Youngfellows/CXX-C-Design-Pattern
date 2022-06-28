#ifndef STUDENTB_H
#define STUDENTB_H

#include "./IColleague.h"

/**
 * @brief 派生类: 学生B
 * 
 */
class StudentB : public IColleague
{
public:
    StudentB(std::string name);
    ~StudentB();
    virtual void talk() override;                   //实现talk()函数
    virtual void receive(std::string msg) override; //实现receive(函数)
};
#endif