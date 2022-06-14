#include "../include/Directory.h"

Directory::Directory(string name)
{
    cout << "Directory()构造函数" << endl;
    this->name = name;
    this->childList = new list<IFile *>();//动态创建对象
}

Directory::~Directory()
{
    cout << "~Directory()析构函数" << endl;
    list<IFile *>::iterator iter;
    for(iter = this->childList->begin(); iter != this->childList->end(); iter++)
    {
        delete *iter;
    }
    this->childList->clear();
}

 /**
 * @brief 获取文件/文件夹名称
 * 
 * @return string 文件/文件夹名称
 */
string Directory::getName()
{
    return this->name;
}

/**
 * @brief 获取文件大小
 * 
 * @return int 文件大小
 */
int Directory::getSize() 
{
    //cout << "Directory::getSize():: ..." << endl;
    int size = 0;
    list<IFile *>::iterator iter;
    for(iter = this->childList->begin(); iter != this->childList->end(); iter++)
    {
       size += (*iter)->getSize();
    }
    return size;
}

/**
 * @brief 添加文件指针到列表
 * 
 * @param file 文件指针
 * @return int 是否添加成功
 */
int Directory::add(IFile *file) 
{
    this->childList->push_back(file);
    return 0;
}

/**
 * @brief 移除文件
 * 
 * @param file 文件指针
 * @return int 是否移除成功
 */
int Directory::remove(IFile *file) 
{
    list<IFile *>::iterator iter;
    for(iter = this->childList->begin(); iter != this->childList->end(); iter++)
    {
        if(*iter == file)
        {
            this->childList->erase(iter);
            delete *iter;
            break;
        }
    }
    return 0;
}

/**
 * @brief 获取子节点列表
 * 
 * @return list<IFile *>* 子节点列表
 */
list<IFile *> * Directory::getChild()
{
    return this->childList;
}

/**
 * @brief 显示信息
 * 
 * @param str 
 */
void Directory::display(string str)
{
    cout << "Directory::display():: ..." << endl;
    cout << toString() << endl;
}