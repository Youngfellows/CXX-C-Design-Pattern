#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //建造者模式
    std::shared_ptr<TextBuilder> builder = std::make_shared<TextBuilder>();      //创建构建者
    std::shared_ptr<Director> director = std::make_shared<Director>(builder); //负责任
    director->construct();                                                    //创建对象

    //std::shared_ptr<TextBuilder> textBuilder = dynamic_cast<std::shared_ptr<TextBuilder>>(builder);

    std::string text = builder->getResult(); //获取结果
    cout << text << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}