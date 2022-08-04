#ifndef LIST_VISITOR_H
#define LIST_VISITOR_H

#include "../interface/IVisitor.h"
#include "../element/Directory.h"

/**
 * @brief 访问者派生类: 文件列表访问者
 *
 */
class ListVisitor : public IVisitor, public std::enable_shared_from_this<ListVisitor>
{
private:
    std::string currentDir; //当前目录

public:
    ListVisitor();
    ~ListVisitor();
    virtual void visitFile(std::shared_ptr<Entry> file) override;     //实现visit()函数
    virtual void visitDir(std::shared_ptr<Entry> directory) override; //实现visit()函数
};
#endif