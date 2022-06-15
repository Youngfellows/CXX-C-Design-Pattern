#ifndef AMERICAN_MOVIE_FACTORY_H
#define AMERICAN_MOVIE_FACTORY_H

#include "../IMovieFactory.h"
#include "../product/AmericanMovie.h"

/**
 * @brief 具体工厂: 生产美国电影的工厂
 * 
 */
class AmericanMovieFactory : public IMovieFactory
{
    public:
        AmericanMovieFactory();
        ~AmericanMovieFactory();
        virtual std::unique_ptr<IMovie> create() override;//覆写create()函数
};

#endif