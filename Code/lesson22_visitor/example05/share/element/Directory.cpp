#include "../../include/element/Directory.h"

Directory::Directory(std::string name)
{
    cout << "Directory()构造函数" << endl;
    this->name = name;
    this->dirs = std::make_shared<std::vector<std::shared_ptr<Entry>>>();
    this->dirs->clear();
}

Directory::~Directory()
{
    cout << "~Directory()析构函数" << endl;
    this->dirs->clear();
}

/**
 * @brief 获取目录名称
 *
 * @return std::string
 */
std::string Directory::getName()
{
    return this->name;
}

/**
 * @brief 获取目录大小
 *
 * @return int
 */
int Directory::getSize()
{
    int size = 0;
    for (auto it : (*this->dirs))
    {
        size += it->getSize(); //累加文件大小
    }
    return size;
}

/**
 * @brief 打印目录列表文件信息
 *
 * @param str 父目录
 */
void Directory::printList(std::string str)
{
    cout << str << "/" << toString() << endl;
    for (auto it : (*this->dirs))
    {
        it->printList(str + "/" + this->name);
    }
}

void Directory::addEntry(std::shared_ptr<Entry> entry)
{
    this->dirs->push_back(entry);
}

/**
 * @brief 接收访问者
 *
 * @param visitor 访问者
 */
void Directory::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visit(shared_from_this()); //让访问者访问目录
}

std::shared_ptr<std::vector<std::shared_ptr<Entry>>> Directory::getEntryList()
{
    return this->dirs;
}