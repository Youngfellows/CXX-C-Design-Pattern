#ifndef IMOVE_FACTORY_H
#define IMOVE_FACTORY_H

#include "./Global.h"
#include "./IMovie.h"

/**
 * @brief 抽象工厂: 生产电影
 * 
 */
class IMovieFactory
{
    public:
        /**
         * @brief 析构函数
         * 
         */
        virtual ~IMovieFactory();

        /**
         * @brief 工厂生产电影
         * 
         * @return std::unique_ptr<IMovie> 返回生产的电影指针变量
         */
        virtual std::unique_ptr<IMovie> create() = 0;
};
#endif