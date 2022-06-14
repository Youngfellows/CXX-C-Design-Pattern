#include "../include/File.h"

File::File(string name,int size)
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
 * @brief 获取文件/文件夹名称
 * 
 * @return string 文件/文件夹名称
 */
string File::getName()
{
    return this->name;
}

/**
 * @brief 获取文件大小
 * 
 * @return int 文件大小
 */
int File::getSize() 
{
    return this->size;
}

/**
 * @brief 添加文件指针到列表
 * 
 * @param file 文件指针
 * @return int 是否添加成功
 */
int File::add(IFile *file) 
{
    return -1;
}

/**
 * @brief 移除文件
 * 
 * @param file 文件指针
 * @return int 是否移除成功
 */
int File::remove(IFile *file) 
{
    return -1;
}

/**
 * @brief 获取子节点列表
 * 
 * @return list<IFile *>* 子节点列表
 */
list<IFile *> * File::getChild()
{
    return NULL;
}

/**
 * @brief 显示信息
 * 
 * @param str 
 */
void File::display(string str)
{
    cout << "File::display():: ..." << endl;
    cout << toString() << endl;
}