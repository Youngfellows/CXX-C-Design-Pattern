#ifndef CONDITION_H
#define CONDITION_H

#include "./Global.h"

/**
 * @brief 实体类: 个人条件
 *
 */
class Condition
{
    private:
        bool house;          //是否有房子
        bool car;            //是否有车
        std::string address; //地址
        std::string job;     //工作
        double deposit;      //存款多少

    public:
        Condition() = default;
        Condition(bool house, bool haveCar, std::string address, std::string job, double deposit);
        ~Condition() = default;
        bool haveHouse();
        bool haveCar();
        std::string getAddress();
        std::string getJob();
        double getDeposit();
};
#endif