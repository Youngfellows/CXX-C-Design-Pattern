#include "../../include/factory/JapaneseMovieFactory.h"

JapaneseMovieFactory::JapaneseMovieFactory()
{
    cout << "JapaneseMovieFactory()构造函数" << endl;
}

JapaneseMovieFactory::~JapaneseMovieFactory()
{
    cout << "~JapaneseMovieFactory()析构函数" << endl;
}

/**
 * @brief 生产日本电影
 * 
 * @return std::unique_ptr<IMovie> 
 */
std::unique_ptr<IMovie> JapaneseMovieFactory::create()
{
    return std::make_unique<JapaneseMovie>();
}