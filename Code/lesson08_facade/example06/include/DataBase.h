#ifndef DATA_BASE_H
#define DATA_BASE_H

#include "./Global.h"

/**
 * @brief 子系统: 数据库
 * 
 */
class DataBase
{
    public:
        ~DataBase() = default;//默认析构函数
        
        /**
         * @brief 单例
         * 
         * @return DataBase & 返回数据库引用
         */
        static DataBase & GetInstance()
        {
            static DataBase db;
            return db;
        }

        /**
         * @brief 通过邮箱名称查询用户
         * 
         * @param email 邮箱名称
         * @return std::string 返回用户名
         */
        std::string getNameByEmail(const std::string &email) const
        {
            auto it = m_map.find(email);
            if (it != m_map.end())
            {
                return it->second;
            }
            else
            {
                return {};
            }
        }

    protected:
        DataBase(const DataBase &) = delete;//禁用复制构造函数
        DataBase(DataBase &&) = delete;//禁用移动构造函数
        DataBase &operator=(const DataBase &) = delete;//禁用赋值函数
        DataBase &operator=(DataBase &&) = delete;//禁用移动赋值函数

    private:
        DataBase() {}

    private:
        //用户列表
        std::unordered_map<std::string, std::string> m_map{ { "zhangsan@zhangsan.com", "zhangsan" },
                                                            { "lisi@lisi.com", "lisi" },
                                                            { "wangwu@wangwu.com", "wangwu" } };
};



#endif