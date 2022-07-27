#ifndef ICOMMAND_H
#define ICOMMAND_H

#include "../Global.h"
#include "./IBarbecuer.h"

/**
 * @brief 抽象类: 抽象命令类
 *
 */
class ICommand
{
protected:
    std::shared_ptr<IBarbecuer> barbecure = nullptr; //烧烤的人

public:
    ICommand(std::shared_ptr<IBarbecuer> barbecure);

    virtual ~ICommand() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 制作烧烤
     */
    virtual void makingBarbecue() = 0;
};
#endif