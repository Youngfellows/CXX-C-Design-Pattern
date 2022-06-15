#include "../../include/product/ChineseMovie.h"

ChineseMovie::ChineseMovie()
{
    cout << "ChineseMovie()构造函数" << endl;
    // this->performers = std::make_unique<std::vector<string>>();
}

ChineseMovie::~ChineseMovie()
{
    cout << "~ChineseMovie()析构函数" << endl;
}

string ChineseMovie::movieName()//覆写movieName()函数
{
    return "<<让子弹飞>>";
}

std::unique_ptr<std::vector<string>> ChineseMovie::performer()//覆写performer()函数
{
    std::unique_ptr<std::vector<string>> performers = std::make_unique<std::vector<string>>();
    performers->push_back("姜文"); 
    performers->push_back("周润发");   
    performers->push_back("葛优");   
    performers->push_back("刘嘉玲");   
    performers->push_back("陈坤");   
    performers->push_back("周韵");   
    performers->push_back("廖凡");
    return performers;   
}

string ChineseMovie::show()//覆写show()函数
{
    return "2010年12月16日";
}
