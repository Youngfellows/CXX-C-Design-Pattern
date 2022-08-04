#include "../../include/element/Entry.h"

/**
 * @brief 基类空实现
 *
 * @param entry
 */
void Entry::addEntry(std::shared_ptr<Entry> entry)
{
}

/**
 * @brief 打印列表
 *
 */
void Entry::printList()
{
    printList("");
}

/**
 * @brief 打印文件或者目录信息
 *
 * @return std::string
 */
std::string Entry::toString()
{
    return getName() + " (" + std::to_string(getSize()) + ")";
}