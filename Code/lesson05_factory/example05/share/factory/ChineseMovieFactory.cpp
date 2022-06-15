#include "../../include/factory/ChineseMovieFactory.h"

ChineseMovieFactory::ChineseMovieFactory()
{
    cout << "ChineseMovieFactory()构造函数" << endl;
}

ChineseMovieFactory::~ChineseMovieFactory()
{
    cout << "~ChineseMovieFactory()析构函数" << endl;
}

/**
 * @brief 生产中国电影
 * 
 * @return std::unique_ptr<IMovie> 
 */
std::unique_ptr<IMovie> ChineseMovieFactory::create()
{
    return std::make_unique<ChineseMovie>();
}