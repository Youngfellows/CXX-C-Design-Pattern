#ifndef GENERAL_MANGER_H
#define GENERAL_MANGER_H

#include "./Manager.h"

/**
 * @brief 总经理
 * 
 */
class GeneralManager : public Manager
{
    public:
        GeneralManager();
        ~GeneralManager();
        virtual Level getHandlerLevel() override;//覆写getHandlerLevel()函数
        virtual std::shared_ptr<Response> processRequest(std::shared_ptr<Request> request) override;//覆写processRequest()函数
        virtual bool canHandleRequest(std::shared_ptr<Request> request) override;//覆写canHandleRequest()函数
};
#endif