#ifndef CAR_HANDLE_H
#define CAR_HANDLE_H

#include "./Global.h"

/**
 * @brief 抽象类: 造完车以后,需要把任务传递下去
 * 
 */
class CarHandle
{
    protected:
       /**
        * @brief 下一个处理单元
        * 
        */
       std::shared_ptr<CarHandle> nextCarHandle = nullptr; 

    public:
    
        /**
         * @brief 析构函数
         * 
         */
        virtual ~CarHandle();

        /**
         * @brief 造车: 纯虚函数 - 子类必须实现
         * 
         */
        virtual void handleCar() = 0;

        /**
         * @brief 设置下一个处理单元
         * 
         * @param nextHandle 下一个处理单元
         */
        void setNextHandle(std::shared_ptr<CarHandle> nextHandle);
};  


#endif