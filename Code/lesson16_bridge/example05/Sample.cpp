#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //桥接模式
    IDisplay *stringDisplayImpl = new StringDisplay("你好,深圳");      //字符显示
    IDisplayDirector *director = new NormalDisplay(stringDisplayImpl); //负责显示字符逻辑
    director->display();                                               //显示

    //释放内存
    delete stringDisplayImpl;
    delete director;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //桥接模式
    std::shared_ptr<IDisplay> displayImpl(new StringDisplay("北京欢迎你呀 ..."));     //普通指针转换智能指针
    std::shared_ptr<IDisplayDirector> director(new NormalDisplay(displayImpl.get())); //获取智能指针,使用get()转换为普通指针,普通指针再转换为智能指针
    director->display();                                                              //显示

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //桥接模式
    std::shared_ptr<IDisplay> displayImpl(new StringDisplay("上海欢迎你 ..."));  //普通指针转换智能指针
    std::shared_ptr<CountDisplay> director(new CountDisplay(displayImpl.get())); //获取智能指针,使用get()转换为普通指针,普通指针再转换为智能指针
    director->mulitDisplay(4);                                                   //多行显示

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}