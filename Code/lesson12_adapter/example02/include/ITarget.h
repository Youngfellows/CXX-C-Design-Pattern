#ifndef ITARGET_H
#define ITARGET_H

/**
 * @brief 抽象类: 目标接口（新接口）
 * 
 */
class ITarget
{
    public:
        virtual ~ITarget() = default;

        /**
         * @brief 纯虚函数,抽象接口: 新接口处理程序
         * 
         */
        virtual void process() = 0;
};
#endif