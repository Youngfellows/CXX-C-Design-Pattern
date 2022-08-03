#ifndef ABS_PARk_ELEMENT_H
#define ABS_PARk_ELEMENT_H

#include "../Global.h"
#include "../interface/IParkElement.h"

/**
 * @brief 基类: 公园(节点基类)
 *
 */
class AbsParkElement : public IParkElement
{
protected:
    std::string name; //节点名称

public:
    AbsParkElement(std::string name);

    virtual ~AbsParkElement() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取公园区域名称
     * @return std::string
     */
    virtual std::string getName() override;
};

#endif