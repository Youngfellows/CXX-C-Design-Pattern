#ifndef PAGE_MAKER_H
#define PAGE_MAKER_H

#include "./HtmlWriter.h"
#include "./DataBase.h"

/**
 * @brief 为这些复杂的操作提供一个一致的门面（外观）
 * @brief 高层接口 Facade
 * 
 */
class PageMaker
{
    public:
        ~PageMaker() = default;//默认析构函数
        PageMaker(const PageMaker &) = delete;//禁用复制构造函数
        PageMaker(PageMaker &&) = delete;//禁用移动复制构造函数
        PageMaker &operator=(const PageMaker &) = delete;//禁用赋值函数
        PageMaker &operator=(PageMaker &&) = delete;//禁用移动赋值函数

        /**
         * @brief 单例
         * 
         * @return PageMaker & 
         */
        static PageMaker &GetInstance()
        {
            static PageMaker pm;
            return pm;
        }

        /**
         * @brief 乘车页面
         * 
         * @param mailAddr 邮箱
         */
        void makeWelcomePage(const std::string &mailAddr)
        {
            auto name = DataBase::GetInstance().getNameByEmail(mailAddr);
            HtmlWriter writer;
            writer.title("Welcome to " + name + "'s page!");
            writer.paragraph(name + u8"欢迎来到" + name + u8"的主页.");
            writer.paragraph(u8"等着你的邮件哦！");
            writer.mailto(mailAddr, name);
            writer.close();
            std::cout << writer.toString() << std::endl;
        }

    protected:
        PageMaker() 
        {
            cout << "私有PageMaker()构造函数" << endl;
        }

    private:
};
#endif