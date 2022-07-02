#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //建造者模式
    std::shared_ptr<IBuilder> builder = std::make_shared<XiaoNvBuilder>();     //创建建造者
    std::shared_ptr<IDirector> director = std::make_shared<Director>(builder); //创建负责人
    std::shared_ptr<Product> product = director->construct();                  //负责人负责创建产品逻辑,返回创建的产品
    product->show();                                                           //显示产品信息

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