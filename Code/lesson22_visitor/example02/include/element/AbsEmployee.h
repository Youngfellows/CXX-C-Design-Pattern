#ifndef ABS_EMPLOYEE_H
#define ABS_EMPLOYEE_H

#include "../interface/IElement.h"

/**
 * @brief 基类: 柜员基类
 *
 */
class AbsEmployee : public IElement
{
private:
    std::string name; //柜员名称

public:
    AbsEmployee(std::string name);
    virtual ~AbsEmployee() = default;
    virtual std::string getName() override; //实现getName()函数
};
#endif