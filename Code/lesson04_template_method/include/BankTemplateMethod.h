#ifndef BANK_TEMPLATE_METHOD_H
#define BANK_TEMPLATE_METHOD_H

#include "./Global.h"

/**
 * @brief 抽象类: 银行业务办理流程
 * 
 */
class BankTemplateMethod
{
    public:
        virtual ~BankTemplateMethod();

        /**
         * @brief 模板函数 - 银行业务办理流程处理好
         * 
         */
        void process();

        /**
         * @brief 做交易 - 纯虚函数
         * 
         */
        virtual void transact() = 0;

    protected:
        /**
         * @brief 排队取号
         * 
         */
        void takeNumber();

        /**
         * @brief 反馈评分
         * 
         */
        void evalute();
};
#endif