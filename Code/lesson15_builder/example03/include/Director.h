#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "./Global.h"
#include "./IBuilder.h"

/**
 * @brief 设计师: 负责创建逻辑
 *
 */
class Director
{
private:
    //IBuilder *m_builder;
    std::shared_ptr<IBuilder> m_builder = nullptr;

public:
    Director(std::shared_ptr<IBuilder> builder) : m_builder(builder)
    {
        cout << "Director()构造函数" << endl;
    }

    ~Director() = default;

    void construct()
    {
        m_builder->makeTitle("Greeting");
        m_builder->makeString(u8"从早上到下午");
        m_builder->makeItems(std::vector<std::string>{u8"早上好", u8"下午好"});
        m_builder->makeString(u8"晚上");
        m_builder->makeItems(std::vector<std::string>{u8"晚上好", u8"晚安", u8"再见"});
        m_builder->close();
    }
};

#endif