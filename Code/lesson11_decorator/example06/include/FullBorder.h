#ifndef FULL_BORDER_H
#define FULL_BORDER_H

#include "./Border.h"

/**
 * @brief 派生类: 全填充装饰器
 * 
 */
class FullBorder : public Border
{
    public:
        FullBorder(IDisplay *display) : Border(display) 
        {
            cout << "FullBorder()构造函数" << endl;
        }
        
        /**
         * @brief 子类实现,获取行数
         * 
         * @return int 返回行数
         */
        virtual int getRows() const override
        {
            return 1 + m_display->getRows() + 1;
        }
        
        /**
         * @brief 子类实现,获取列数
         * 
         * @return int 返回列数
         */
        virtual int getColumns() const override
        {
            return 1 + m_display->getColumns() + 1;
        }

        /**
         * @brief 子类实现,返回指定索引行的字符串
         * 
         * @param index 指定索引行
         * @return std::string 返回行字符串
         */
        virtual std::string getRow(int index) const override
        {
            if (index == 0)
            {
                return "+" + makeLine('-', m_display->getColumns()) + "+";
            }
            else if (index == m_display->getRows() + 1)
            {
                return "+" + makeLine('-', m_display->getColumns()) + "+";
            }
            else
            {
                return "|" + m_display->getRow(index - 1) + "|";
            }
        }

    private:

        /**
         * @brief 根据字符和字符个数生成字符串
         * 
         * @param ch 字符
         * @param count 字符个数
         * @return std::string 返回字符串
         */
        std::string makeLine(char ch, int count) const
        {
            std::string str;
            str.resize(count, ch);
            return str;
        }
};

#endif