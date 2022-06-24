#ifndef STRING_DISPLAY_H
#define STRING_DISPLAY_H

#include "./IDisplay.h"

/**
 * @brief 派生类: 显示字符串
 * 
 */
class StringDisplay : public IDisplay
{
    public:

        StringDisplay(const std::string &str) : m_str(str) 
        {
            cout << "StringDisplay()构造函数" << endl;
        }

        /**
         * @brief 实现getRows()函数,获取字符串行数
         * 
         * @return int 返回行数
         */
        virtual int getRows() const override
        {
            return 1;
        }

        /**
         * @brief 实现getColumns()函数,获取列数,也就是字符串的长度
         * 
         * @return int 返回列数,字符串的长度
         */
        virtual int getColumns() const override
        {
            return static_cast<int>(m_str.length());
        }

        /**
         * @brief 实现getRow()函数,返回指定行字符串
         * 
         * @param index 指定行索引
         * @return std::string 返回行字符串
         */
        virtual std::string getRow(int index) const override
        {
            if (index == 0)
            {
                return m_str;//返回行字符串
            }
            else
            {
                return {};
            }
        }

    private:
        std::string m_str;//行字符串
};

#endif