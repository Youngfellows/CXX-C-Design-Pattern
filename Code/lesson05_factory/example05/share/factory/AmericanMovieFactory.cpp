#include "../../include/factory/AmericanMovieFactory.h"

AmericanMovieFactory::AmericanMovieFactory()
{
    cout << "AmericanMovieFactory()构造函数" << endl;
}

AmericanMovieFactory::~AmericanMovieFactory()
{
    cout << "~AmericanMovieFactory()析构函数" << endl;
}

/**
 * @brief 生产美国电影
 * 
 * @return std::unique_ptr<IMovie> 
 */
std::unique_ptr<IMovie> AmericanMovieFactory::create()
{
    return std::make_unique<AmericanMovie>();
}