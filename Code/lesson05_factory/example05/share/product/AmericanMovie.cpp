#include "../../include/product/AmericanMovie.h"

AmericanMovie::AmericanMovie()
{
    cout << "AmericanMovie()构造函数" << endl;
    // this->performers = std::make_unique<std::vector<string>>();
}

AmericanMovie::~AmericanMovie()
{
    cout << "~AmericanMovie()析构函数" << endl;
}

string AmericanMovie::movieName()//覆写movieName()函数
{
    return "<<钢铁侠>>";
}

std::unique_ptr<std::vector<string>> AmericanMovie::performer()//覆写performer()函数
{
    //、、、
    std::unique_ptr<std::vector<string>> performers = std::make_unique<std::vector<string>>();
    performers->push_back("小罗伯特·唐尼"); 
    performers->push_back("格温妮斯·帕特洛");   
    performers->push_back("泰伦斯·霍华德");   
    performers->push_back("杰夫·布里吉斯");
    return performers;   
}

string AmericanMovie::show()//覆写show()函数
{
    return "2008年5月2日(美国)、2008年4月30日（中国大陆）";
}
