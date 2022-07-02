#ifndef TEXT_BUILDER_H
#define TEXT_BUILDER_H

#include "./IBuilder.h"

/**
 * @brief 派生类: 文本创建者
 * 
 */
class TextBuilder : public IBuilder
{
private:
    std::string m_str;

public:
    TextBuilder() = default;
    ~TextBuilder() = default;
    void makeTitle(const std::string &title) override
    {
        m_str.append("============================\n");
        m_str.append("[" + title + "]\n");
        m_str.append("\n");
    }

    void makeString(const std::string &str) override
    {
        m_str.append(" * " + str + "\n");
        m_str.append("\n");
    }

    void makeItems(const std::vector<std::string> &items) override
    {
        for (auto item : items)
        {
            m_str.append(" .  " + item + "\n");
        }
        m_str.append("\n");
    }

    void close() override
    {
        m_str.append("============================\n");
    }

    std::string getResult() const
    {
        return m_str;
    }
};

#endif