#ifndef ADAPTER_H
#define ADAPTER_H

#include "./Global.h"
#include "./Current18v.h"
#include "./Current220v.h"

/**
 * @brief 适配器: 使使用220v电压的充电器也能适配使用18v
 * @brief 对象适配器
 */
class Adapter : public Current18v
{
    private:
        std::unique_ptr<Current220v> current220v = nullptr;//被适配对象

    public:
        Adapter(std::unique_ptr<Current220v> current220v );
        ~Adapter();
        virtual void useCurrent18v() override;//实现useCurrent18v()函数
};
#endif