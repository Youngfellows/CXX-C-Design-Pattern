#include "../include/IColleague.h"

IColleague::IColleague(std::string name)
{
    cout << "IColleague()构造函数" << endl;
    this->name = name;
}

/**
 * @brief 获取姓名
 *
 * @return std::string
 */
std::string IColleague::getName()
{
    return this->name;
}

/**
 * @brief 获取发布内容
 *
 * @return std::string
 */
std::string IColleague::getContent()
{
    return this->content;
}

/**
 * @brief 设置内容
 *
 * @param content
 */
void IColleague::setContent(std::string content)
{
    this->content = content;
}