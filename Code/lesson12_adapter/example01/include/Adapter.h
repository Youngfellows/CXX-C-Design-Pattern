#ifndef ADAPTER_H
#define ADAPTER_H

#include "./Global.h"
#include "./ITarget.h"
#include "./IAdaptee.h"

/**
 * @brief 对象适配器
 * @brief 继承 + 组合
 */
class Adapter : public ITarget //继承
{
    private:
         std::unique_ptr<IAdaptee> pAdaptee = nullptr; 

    public:
        Adapter(std::unique_ptr<IAdaptee> pAdaptee);
        ~Adapter();
        virtual void process() override;//实现process()函数
};
#endif