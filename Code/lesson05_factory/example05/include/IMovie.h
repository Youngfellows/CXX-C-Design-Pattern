#ifndef IMOVIE_H
#define IMOVIE_H

#include "./Global.h"

/**
 * @brief 抽象产品: 电影
 * 
 */
class IMovie
{
    public:

        /**
         * @brief 析构名称
         * 
         */
        virtual ~IMovie();

        /**
         * @brief 电影名称 - 纯虚函数 - 抽象方法
         * 
         * @return string 
         */
        virtual string movieName() = 0;

        /**
         * @brief 获取演员列表 - 纯虚函数 - 抽象方法
         * 
         * @return std::unique_ptr<std::vector<string>> 返回演员列表
         */
        virtual std::unique_ptr<std::vector<string>> performer() = 0;

        /**
         * @brief 上映时间 - 纯虚函数 - 抽象方法
         * 
         * @return string 返回上映时间
         */
        virtual string show() = 0;
};
#endif