#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //中介者模式,通过中介发布消息
    UniteNations * mediator = new UnitedNationsSecurityCouncil();//创建中介者
    Country *usa = new USA(mediator);//创建发布消息对象-美国
    Country *iraq = new Iraq(mediator);//创建发布消息对象-伊拉克

    //设置中介者管理消息发布对象
    //类型转换
    UnitedNationsSecurityCouncil *uniteNations = dynamic_cast<UnitedNationsSecurityCouncil *>(mediator);
    if(uniteNations != nullptr)
    {
        cout << "xxx" << endl;
        uniteNations->setUSA(usa);
        uniteNations->setIraq(iraq);
    }

    //美国发布消息
    //usa->declare("不准开发核武器,否则打你 ...");
    mediator->declare(usa,"不准开发核武器,否则打你 ...");

    //伊拉克发布消息
    //iraq->declare("他妈的美国去死 ...");
    mediator->declare(iraq,"他妈的美国去死 ...");

    //释放内存
    delete iraq;
    delete usa;
    delete mediator;
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