#ifndef SIDE_BORDER_H
#define SIDE_BORDER_H

#include "./Border.h"

/**
 * @brief 派生类: 侧面边框装饰器,带字符边框的
 * 
 */
class SideBorder : public Border
{
    public:
        SideBorder(IDisplay *display, const char &borderChar) : Border(display), m_borderChar(borderChar) 
        {
            cout << "SideBorder()构造函数" << endl;
        }
        
        /**
         * @brief 子类实现,获取行数
         * 
         * @return int 返回行数
         */
        virtual int getRows() const override
        {
            return m_display->getRows();//调用父类方法
        }
        
        /**
         * @brief 子类实现,获取列数
         * 
         * @return int 返回列数
         */
        virtual int getColumns() const override
        {
            return 1 + m_display->getColumns() + 1;//调用父类方法
        }

        /**
         * @brief 子类实现,返回指定索引行的字符串
         * 
         * @param index 指定索引行
         * @return std::string 返回行字符串
         */
        virtual std::string getRow(int index) const override
        {
            return m_borderChar + m_display->getRow(index) + m_borderChar;//调用父类方法
        }

    private:
        char m_borderChar;//边框字符
};

#endif