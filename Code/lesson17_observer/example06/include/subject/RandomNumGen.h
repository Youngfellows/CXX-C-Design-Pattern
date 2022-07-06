#ifndef RANDOM_NUM_GEN_H
#define RANDOM_NUM_GEN_H

#include "../NumGen.h"

/**
 * @brief 派生类: 随机数生成器(被观察者实现类)
 *
 */
class RandomNumGen : public NumGen
{
private:
    std::random_device m_rd;
    std::mt19937 m_gen{m_rd()};
    std::uniform_int_distribution<int> m_dis{0, 100}; //生成0 ~ 100的随机数
    int m_number{0};

public:
    RandomNumGen();
    ~RandomNumGen();
    virtual int getNumber() override; //实现getNumber()函数
    virtual void excute() override;   //实现excute()函数
};
#endif