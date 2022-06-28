#ifndef STUDENTA_H
#define STUDENTA_H

#include "./IColleague.h"

/**
 * @brief 派生类: 学生A
 * 
 */
class StudentA : public IColleague
{
public:
    StudentA(std::string name);
    ~StudentA();
    virtual void talk() override;                   //实现talk()函数
    virtual void receive(std::string msg) override; //实现receive(函数)
};
#endif