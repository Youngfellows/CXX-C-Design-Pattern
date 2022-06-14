#ifndef IFILE_H
#define IFILE_H

#include "./Global.h"

class IFile
{
    public:
    
        /**
         * @brief 析构函数
         * 
         */
        virtual ~IFile();

        /**
         * @brief 获取文件/文件夹名称
         * 
         * @return string 文件/文件夹名称
         */
        virtual string getName() = 0;

        /**
         * @brief 获取文件大小
         * 
         * @return int 文件大小
         */
        virtual int getSize() = 0;

        /**
         * @brief 添加文件指针到列表
         * 
         * @param file 文件指针
         * @return int 是否添加成功
         */
        virtual int add(IFile *file) = 0;

        /**
         * @brief 移除文件
         * 
         * @param file 文件指针
         * @return int 是否移除成功
         */
        virtual int remove(IFile *file) = 0;

        /**
         * @brief 获取子节点列表
         * 
         * @return list<IFile *>* 子节点列表
         */
        virtual list<IFile *> * getChild() = 0;

        /**
         * @brief 显示信息
         * 
         * @param str 
         */
        virtual void display(string str) = 0;

        /**
         * @brief 打印信息
         * 
         * @return string 
         */
        string toString();

        /**
         * @brief 显示信息
         * 
         * @param str 
         */
        void display();
};



#endif