#include "../../include/invorker/BeautyNurse.h"

BeautyNurse::BeautyNurse()
{
    cout << "BeautyNurse()无参数构造函数" << endl;
}

BeautyNurse::BeautyNurse(std::shared_ptr<ICommand> command)
{
    cout << "BeautyNurse()有参数构造函数" << endl;
    this->command = command;
}

BeautyNurse::~BeautyNurse()
{
    cout << "~BeautyNurse()析构函数" << endl;
}

/**
 * @brief 设置命令
 *
 * @param command 要执行的命令
 */
void BeautyNurse::setCommand(std::shared_ptr<ICommand> command)
{
    this->command = command;
}

/**
 * @brief 提交执行命令
 *
 */
void BeautyNurse::submittedCase()
{
    this->command->treat();
}