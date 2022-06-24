#ifndef IDISPLAY_H
#define IDISPLAY_H

#include "./Global.h"

/**
 * @brief 抽象类: 显示
 * 
 */
class IDisplay
{
    public:
    
        virtual ~IDisplay() = default;//默认析构函数

        /**
         * @brief 纯虚函数,抽象接口: 返回行数
         * 
         * @return int 行数
         */
        virtual int getRows() const = 0;

        /**
         * @brief 纯虚函数,抽象接口: 返回列数
         * 
         * @return int 列数
         */
        virtual int getColumns() const = 0;

        /**
         * @brief 或者指定行内容
         * 
         * @param index 指定行索引
         * @return std::string 返回指定行内容
         */
        virtual std::string getRow(int index) const = 0;

        /**
         * @brief 显示行列信息
         * 
         */
        void show()
        {
            int r = getRows();
            for (int i = 0; i < r; ++i)
            {
                std::cout << getRow(i) << std::endl;
            }
        }
};

#endif