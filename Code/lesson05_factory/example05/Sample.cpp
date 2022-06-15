#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //工厂方法模式
    //通过工厂生产电影,使用智能指针
    std::unique_ptr<IMovieFactory> factory = std::make_unique<ChineseMovieFactory>();//创建电影工厂
    std::unique_ptr<IMovie> movie = factory->create();//生产电影

    //通过指针调用函数
    string name = movie->movieName();//电影名称
    string showTime = movie->show();//上映时间
    cout << "电影名称:" << name << endl;
    cout << "上映时间:" << showTime << endl;
    cout << "======= 演员列表 =====" << endl;
    std::unique_ptr<std::vector<string>> performers = movie->performer();//获取演员列表
    std::vector<string>::iterator iter;
    for(iter = performers->begin(); iter != performers->end(); iter++)
    {
        string actor = *iter;
        cout << actor << " ";
    }
    cout << endl;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //工厂方法模式
    //通过工厂生产电影,使用智能指针
    std::unique_ptr<IMovieFactory> factory = std::make_unique<JapaneseMovieFactory>();//创建电影工厂
    std::unique_ptr<IMovie> movie = factory->create();//生产电影

    //通过指针调用函数
    string name = movie->movieName();//电影名称
    string showTime = movie->show();//上映时间
    cout << "电影名称:" << name << endl;
    cout << "上映时间:" << showTime << endl;
    cout << "======= 演员列表 =====" << endl;
    std::unique_ptr<std::vector<string>> performers = movie->performer();//获取演员列表
    std::vector<string>::iterator iter;
    for(iter = performers->begin(); iter != performers->end(); iter++)
    {
        string actor = *iter;
        cout << actor << " ";
    }
    cout << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //工厂方法模式
    //通过工厂生产电影,使用智能指针
    std::unique_ptr<IMovieFactory> factory = std::make_unique<AmericanMovieFactory>();//创建电影工厂
    std::unique_ptr<IMovie> movie = factory->create();//生产电影

    //通过指针调用函数
    string name = movie->movieName();//电影名称
    string showTime = movie->show();//上映时间
    cout << "电影名称:" << name << endl;
    cout << "上映时间:" << showTime << endl;
    cout << "======= 演员列表 =====" << endl;
    std::unique_ptr<std::vector<string>> performers = movie->performer();//获取演员列表
    std::vector<string>::iterator iter;
    for(iter = performers->begin(); iter != performers->end(); iter++)
    {
        string actor = *iter;
        cout << actor << " ";
    }
    cout << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}