#ifndef ABS_VISITOR_H
#define ABS_VISITOR_H

#include "../Global.h"
#include "../interface/IVisitor.h"

/**
 * @brief 基类: 访问者基类
 *
 */
class AbsVisitor : public IVisitor
{
private:
    std::string nickName; //访问者名称

public:
    AbsVisitor(std::string nickName);
    virtual ~AbsVisitor() = default;
    std::string getNickName();
};
#endif