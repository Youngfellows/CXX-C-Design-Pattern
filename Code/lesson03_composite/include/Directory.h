#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "./IFile.h"

/**
 * @brief 组合对象,文件夹
 * 
 */
class Directory : public IFile
{
    private:
        string name;//文件夹名称
        list<IFile *> * childList = NULL;//子结点列表

    public:
        Directory(string name);
        ~Directory();
         /**
         * @brief 获取文件/文件夹名称
         * 
         * @return string 文件/文件夹名称
         */
        string getName() override;

        /**
         * @brief 获取文件大小
         * 
         * @return int 文件大小
         */
        int getSize() override;

        /**
         * @brief 添加文件指针到列表
         * 
         * @param file 文件指针
         * @return int 是否添加成功
         */
        int add(IFile *file) override;

        /**
         * @brief 移除文件
         * 
         * @param file 文件指针
         * @return int 是否移除成功
         */
        int remove(IFile *file) override;

        /**
         * @brief 获取子节点列表
         * 
         * @return list<IFile *>* 子节点列表
         */
        list<IFile *> * getChild() override;

        /**
         * @brief 显示信息
         * 
         * @param str 
         */
        void display(string str) override;
};
#endif