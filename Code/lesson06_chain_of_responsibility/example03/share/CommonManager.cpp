#include "../include/CommonManager.h"

CommonManager::CommonManager()
{
    cout << "CommonManager()构造函数" << endl;
}

CommonManager::~CommonManager()
{
    cout << "~CommonManager()析构函数" << endl;
}

/**
 * @brief 获取请求级别,覆写getHandlerLevel()函数
 * 
 * @return Level 返回请求级别
 */
Level CommonManager::getHandlerLevel()
{
    return Level::LEVEL_3;
}

/**
 * @brief 处理请求,覆写processRequest()函数
 * 
 * @param request 请求体
 * @return Response 响应体
 */
std::shared_ptr<Response> CommonManager::processRequest(std::shared_ptr<Request> request)
{
    cout << "CommonManager::processRequest():: 经理批准了请求 ..." << endl;
    cout << "请求人:" << request->getName() << endl;
    cout << "请求级别:" << request->getRequestLevel() << endl;
    cout << "请求数量:" << request->getNumber() << endl;
    cout << "请求内容:" << request->getContent() << endl;
    string num = std::to_string(request->getNumber());
    string req = "经理批准了"+request->getName()+"的"+num+"条"+request->getContent();
    return std::make_shared<Response>(req);
}

/**
 * @brief 是否处理请求,覆写canHandleRequest()函数
 *      
 * 
 * @param request 请求体
 * @return true 处理请求
 * @return false 不处理请求
 */
bool CommonManager::canHandleRequest(std::shared_ptr<Request> request)
{
    return ((this->getHandlerLevel() == request->getRequestLevel()) && (request->getNumber() <= 2));
}
