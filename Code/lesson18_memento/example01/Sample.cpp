#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //备忘录模式
    std::shared_ptr<Originator> originator = std::make_shared<Originator>(); //创建数据原生者

    //设置数据
    originator->setState("打开开关");
    originator->display();

    //创建备忘录
    std::shared_ptr<Memento> memento = originator->createMemento();
    originator->setState("关闭开关");
    originator->display();

    originator->setState("开关被我搞坏了");
    originator->display();

    cout << "========== 恢复数据 =========" << endl;

    //从忘录恢复数据
    originator->restoreToMemento(memento);
    originator->display();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //备忘录模式
    std::shared_ptr<Originator> originator = std::make_shared<Originator>();        //数据愿生者
    std::shared_ptr<CareTaker> caretaker = std::make_shared<CareTaker>(originator); //备忘录管理者

    //设置并保存状态#1#
    originator->setState("#1#");
    caretaker->save();
    originator->display();

    //设置并保存状态#2#
    originator->setState("#2#");
    caretaker->save();
    originator->display();

    //设置并保存状态#3#
    originator->setState("#3#");
    caretaker->save();
    originator->display();

    //设置并保存状态#4#
    originator->setState("#4#");
    caretaker->save();
    originator->display();

    //设置并保存状态#5#
    originator->setState("#5#");
    caretaker->save();
    originator->display();

    //设置并保存状态#6#
    originator->setState("#6#");
    caretaker->save();
    originator->display();

    //设置并保存状态#7#
    originator->setState("#7#");
    caretaker->save();
    originator->display();

    //设置并保存状态#8#
    originator->setState("#8#");
    caretaker->save();
    originator->display();

    //设置并保存状态#9#
    originator->setState("#9#");
    caretaker->save();
    originator->display();

    cout << "=================== 恢复数据 ==========================" << endl;
    caretaker->rollback(7); //恢复第7次数据
    originator->display();  //显示恢复后的数据

    caretaker->undo();     //恢复最近一次历史数据
    originator->display(); //显示恢复后的数据

    caretaker->rollback(3); //恢复第7次数据
    originator->display();  //显示恢复后的数据

    caretaker->undo();     //恢复最近一次历史数据
    originator->display(); //显示恢复后的数据

    caretaker->rollback(8); //恢复第8次数据
    originator->display();  //显示恢复后的数据

    caretaker->undo();     //恢复最近一次历史数据
    originator->display(); //显示恢复后的数据

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