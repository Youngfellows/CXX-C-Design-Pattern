#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "../Global.h"
#include "./Entry.h"

/**
 * @brief 角色派生类: 目录
 *
 */
class Directory : public Entry, public std::enable_shared_from_this<Directory>
{
private:
    std::string name;
    std::shared_ptr<std::vector<std::shared_ptr<Entry>>> dirs = nullptr; //目录列表

public:
    Directory(std::string name);
    ~Directory();
    virtual std::string getName() override;                              //实现getName()函数
    virtual int getSize() override;                                      //实现getSize()函数
    virtual void printList(std::string str) override;                    //实现printList()函数
    virtual void accept(std::shared_ptr<IVisitor> visitor) override;     //实现accept()函数
    virtual void addEntry(std::shared_ptr<Entry> entry) override;        //实现addEntry()函数
    std::shared_ptr<std::vector<std::shared_ptr<Entry>>> getEntryList(); //获取文件列表
};
#endif