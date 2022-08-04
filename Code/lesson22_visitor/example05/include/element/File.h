#ifndef FILE_H
#define FILE_H

#include "../Global.h"
#include "./Entry.h"

/**
 * @brief 角色派生类: 文件
 *
 */
class File : public Entry, public std::enable_shared_from_this<File>
{
private:
    std::string name; //文件名
    int size;         //文件大小

public:
    File(std::string name, int size);
    ~File();
    virtual std::string getName() override;                          //实现getName()函数
    virtual int getSize() override;                                  //实现getSize()函数
    virtual void printList(std::string str) override;               //实现printList()函数
    virtual void accept(std::shared_ptr<IVisitor> visitor) override; //实现accept()函数
};
#endif