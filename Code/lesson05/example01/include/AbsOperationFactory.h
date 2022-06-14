#ifndef ABS_OPERATION_FACTORY_H
#define ABS_OPERATION_FACTORY_H

#include "./Global.h"
#include "./Operation.h"

/**
 * @brief 抽象工厂类 - 生产运算的工厂
 * 
 */
class AbsOperationFactory
{
    public:
        /**
         * @brief 析构函数
         * 
         */
       virtual ~AbsOperationFactory();

       /**
        * @brief 根据类型生产产品 - 创建运算产品
        * 
        * @param type 类型
        * @return Operation* 具体指针变量
        */
       virtual Operation * create(string type) = 0;
       
};
#endif