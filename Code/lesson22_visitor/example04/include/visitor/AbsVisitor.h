#ifndef ABS_VISITOR_H
#define ABS_VISITOR_H

#include "../interface/IVisitor.h"

/**
 * @brief 基类: 访问者基类
 *
 */
class AbsVisitor : public IVisitor
{
protected:
    std::string name; //访问者名称

public:
    AbsVisitor(std::string name);
    virtual ~AbsVisitor() = default;
};
#endif