#ifndef IVISITOR_H
#define IVISITOR_H

#include "../Global.h"
#include "../element/Entry.h"

//先声明类,后面再定义
// class File;
// class Directory;
class Entry;

/**
 * @brief 抽象接口: 访问者抽象接口
 *
 */
class IVisitor
{
public:
    virtual ~IVisitor() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 访问者访问文件
     * @param file 要访问的文件
     */
    virtual void visitFile(std::shared_ptr<Entry> file) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 访问者访问目录
     * @param directory 要访问的目录
     */
    virtual void visitDir(std::shared_ptr<Entry> directory) = 0;
};

#endif