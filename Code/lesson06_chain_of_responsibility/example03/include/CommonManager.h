#ifndef COMMON_MANAGER_H
#define COMMON_MANAGER_H

#include "./Manager.h"

/**
 * @brief 经理
 * 
 */
class CommonManager : public Manager
{
    public:
        CommonManager();
        ~CommonManager();
        virtual Level getHandlerLevel() override;//覆写getHandlerLevel()函数
        virtual std::shared_ptr<Response> processRequest(std::shared_ptr<Request> request) override;//覆写processRequest()函数
        virtual bool canHandleRequest(std::shared_ptr<Request> request) override;//覆写canHandleRequest()函数
};
#endif