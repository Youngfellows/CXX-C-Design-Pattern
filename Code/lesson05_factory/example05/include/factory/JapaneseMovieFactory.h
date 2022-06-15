#ifndef JAPANESE_MOVIE_FACTORY_H
#define JAPANESE_MOVIE_FACTORY_H

#include "../IMovieFactory.h"
#include "../product/JapaneseMovie.h"

/**
 * @brief 具体工厂: 生产日本电影的工厂
 * 
 */
class JapaneseMovieFactory : public IMovieFactory
{
    public:
        JapaneseMovieFactory();
        ~JapaneseMovieFactory();
        virtual std::unique_ptr<IMovie> create() override;//覆写create()函数
};
#endif