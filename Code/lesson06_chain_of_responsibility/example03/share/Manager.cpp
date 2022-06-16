#include "../include/Manager.h"

Manager::~Manager()
{
    cout << "~Manager()析构函数" << endl;
}

/**
 * @brief 处理请求
 * 
 * @param request 请求体
 */
std::shared_ptr<Response> Manager::handle(std::shared_ptr<Request> request)
{
    //自己处理
    if(this->canHandleRequest(request))
    {
       return this->processRequest(request);
    }

    //上一级处理
    if(nullptr != this->super)
    {
       return this->super->handle(request);
    }
    return nullptr;
}

/**
 * @brief 设置下一个处理者
 * 
 * @param next 下一个处理者
 */
void Manager::setSuperior(std::shared_ptr<Manager> super)
{
    this->super = super;
}