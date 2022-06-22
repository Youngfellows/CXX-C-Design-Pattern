#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //享元模式,使用单例,创建对象
    ToolBox * toolbox = ToolBox::getInstance();

    //通过指针获取工具
    std::shared_ptr<Tool> tool = toolbox->getTool(ANDROID_STUDIO);
    tool->use();

    tool = toolbox->getTool(PYCHARM);
    tool->use();

    tool = toolbox->getTool(AUDACITY);
    tool->use();

    //释放内存
    delete toolbox;
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