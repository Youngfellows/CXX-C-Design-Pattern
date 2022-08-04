#ifndef ENTRY_H
#define ENTRY_H

#include "../interface/IElement.h"

/**
 * @brief 基类: 文件实体基类
 *
 */
class Entry : public IElement
{
public:
    virtual ~Entry() = default;
    virtual std::string getName() = 0;
    virtual int getSize() = 0;
    virtual void addEntry(std::shared_ptr<Entry> entry); //添加文件或者目录实体,基类空实现
    virtual void printList(std::string str) = 0;         //打印列表
    void printList();                                    //打印列表
    std::string toString();                              //打印文件或者目录信息
};
#endif