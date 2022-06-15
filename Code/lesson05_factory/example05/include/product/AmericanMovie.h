#ifndef AMERICAN_MOVIE_H
#define AMERICAN_MOVIE_H

#include "../IMovie.h"

/**
 * @brief 具体产品类: 电影 -> 美国电影
 * 
 */
class AmericanMovie : public IMovie
{
    private:
        //std::unique_ptr<std::vector<string>> performers;

    public:
        AmericanMovie();
        ~AmericanMovie();
        virtual string movieName() override;//覆写movieName()函数
        virtual std::unique_ptr<std::vector<string>> performer() override;//覆写performer()函数
        virtual string show() override;//覆写show()函数
};
#endif