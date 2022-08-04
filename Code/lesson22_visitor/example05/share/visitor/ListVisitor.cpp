#include "../../include/visitor/ListVisitor.h"

ListVisitor::ListVisitor()
{
    cout << "ListVisitor()构造函数" << endl;
}

ListVisitor::~ListVisitor()
{
    cout << "~ListVisitor()析构函数" << endl;
}

/**
 * @brief 访问者访问文件
 *
 * @param file 文件
 */
void ListVisitor::visitFile(std::shared_ptr<Entry> file)
{
    cout << this->currentDir << "/" << file->getName() << " " << file->getSize() << endl;
}

/**
 * @brief 访问者访问目录
 *
 * @param directory 目录
 */
void ListVisitor::visitDir(std::shared_ptr<Entry> directory)
{
    cout << this->currentDir << "/" << directory->getName() << " " << directory->getSize() << endl;
    std::string saved = this->currentDir;                        //保存当前目录名称
    this->currentDir += "/" + directory->getName();              //获取新的目录名称
    Directory *dir = dynamic_cast<Directory *>(directory.get()); //做类型转化
    if (dir != nullptr)
    {
        auto entryList = dir->getEntryList(); //获取目录列表
        for (auto it : (*entryList))
        {
            it->accept(shared_from_this());
        }
    }
    this->currentDir = saved;
}