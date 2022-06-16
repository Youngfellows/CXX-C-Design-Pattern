#ifndef MAJORDOMO_H
#define MAJORDOMO_H

#include "./Manager.h"

/**
 * @brief 总监
 * 
 */
class Majordomo : public Manager
{
    public:
        Majordomo();
        ~Majordomo();
        virtual Level getHandlerLevel() override;//覆写getHandlerLevel()函数
        virtual std::shared_ptr<Response> processRequest(std::shared_ptr<Request> request) override;//覆写processRequest()函数
        virtual bool canHandleRequest(std::shared_ptr<Request> request) override;//覆写canHandleRequest()函数
};
#endif