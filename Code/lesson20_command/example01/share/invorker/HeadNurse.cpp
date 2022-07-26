#include "../../include/invorker/HeadNurse.h"

HeadNurse::HeadNurse()
{
    cout << "HeadNurse()无参数构造函数" << endl;
    this->commands = std::make_shared<std::list<std::shared_ptr<ICommand>>>();
}

HeadNurse::~HeadNurse()
{
    cout << "~HeadNurse()析构函数" << endl;
}

/**
 * @brief 设置命令
 *
 * @param command 要执行的命令
 */
void HeadNurse::setCommand(std::shared_ptr<ICommand> command)
{
    this->commands->push_back(command);
}

/**
 * @brief 提交执行命令
 *
 */
void HeadNurse::submittedCase()
{
    for (auto iter = this->commands->begin(); iter != this->commands->end(); iter++)
    {
        (*iter)->treat(); //批量执行命令
    }
}
