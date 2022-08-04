#include "../../include/element/File.h"

File::File(std::string name, int size)
{
    cout << "File()构造函数" << endl;
    this->name = name;
    this->size = size;
}

File::~File()
{
    cout << "~File()析构函数" << endl;
}

/**
 * @brief 返回文件名
 *
 * @return std::string
 */
std::string File::getName()
{
    return this->name;
}

/**
 * @brief 返回文件大小
 *
 * @return int
 */
int File::getSize()
{
    return this->size;
}

/**
 * @brief 打印文件信息
 *
 * @param str 当前文件路径
 */
void File::printList(std::string str)
{
    cout << str << "/" << toString() << endl;
}

/**
 * @brief 接收访问者
 *
 * @param visitor
 */
void File::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visit(shared_from_this()); //让访问者访问文件
}