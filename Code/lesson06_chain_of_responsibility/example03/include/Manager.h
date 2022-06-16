#ifndef MANAGER_H
#define MANAGER_H

#include "./Request.h"
#include "./Response.h"

/**
 * @brief 抽象类: 管理者
 * 
 */
class Manager
{
    protected:
        /**
         * @brief 下一个处理者
         * 
         */
        std::shared_ptr<Manager> super = nullptr;

    protected:
        /**
         * @brief 每个处理者都有一个处理级别
         * 
         * @return Level 返回处理级别
         */
        virtual Level getHandlerLevel() = 0;
        
        /**
         * @brief 每个处理者都必须实现处理任务
         * 
         * @param request 请求体
         * @return Response 响应体
         */
        virtual std::shared_ptr<Response> processRequest(std::shared_ptr<Request> request) = 0;

        /**
         * @brief 是否能处理请求
         * 
         * @param request 请求体
         * @return true 能处理请求
         * @return false 不能处理请求
         */
        virtual bool canHandleRequest(std::shared_ptr<Request> request) = 0;

    public:
        virtual ~Manager();

        /**
         * @brief 处理请求
         * 
         * @param request 请求体
         */
        std::shared_ptr<Response> handle(std::shared_ptr<Request> request);

        /**
         * @brief 设置下一个处理者
         * 
         * @param next 下一个处理者
         */
        void setSuperior(std::shared_ptr<Manager> super);


};
#endif