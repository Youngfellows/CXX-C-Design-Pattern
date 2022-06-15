#include "../../include/product/JapaneseMovie.h"

JapaneseMovie::JapaneseMovie()
{
    cout << "JapaneseMovie()构造函数" << endl;
    // this->performers = std::make_unique<std::vector<string>>();
}

JapaneseMovie::~JapaneseMovie()
{
    cout << "~JapaneseMovie()析构函数" << endl;
}

string JapaneseMovie::movieName()//覆写movieName()函数
{
    return "<<千与千寻>>";
}

std::unique_ptr<std::vector<string>> JapaneseMovie::performer()//覆写performer()函数
{
    std::unique_ptr<std::vector<string>> performers = std::make_unique<std::vector<string>>();
    performers->push_back("柊瑠美"); 
    performers->push_back("入野自由");   
    performers->push_back("夏木真理");   
    performers->push_back("菅原文太");   
    return performers;   
}

string JapaneseMovie::show()//覆写show()函数
{
    return "2001年7月20日(日本)";
}
