#ifndef CHINESE_MOVIE_FACTORY_H
#define CHINESE_MOVIE_FACTORY_H

#include "../IMovieFactory.h"
#include "../product/ChineseMovie.h"

/**
 * @brief 具体工厂: 生产中国电影的工厂
 * 
 */
class ChineseMovieFactory : public IMovieFactory
{
    public:
        ChineseMovieFactory();
        ~ChineseMovieFactory();
        virtual std::unique_ptr<IMovie> create() override;//覆写create()函数
};
#endif