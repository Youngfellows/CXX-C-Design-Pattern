#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //备忘录模式
    std::shared_ptr<Originator> editor = std::make_shared<Editor>("今天下班记得做核酸", 1.5, 2.3, 4.8); //数据产生者
    editor->display();                                                                                  //显示数据

    //保存数据
    std::shared_ptr<Memento> snapshot = editor->createSnapshot(); //获取到保存数据的备忘录

    //设置数据
    editor->setText("下班吃鱼记得带雨伞,可能会下大雨 ...");
    editor->setCursor(4.4, 5.5);
    editor->setSelectionWidth(7.8);
    editor->display(); //显示数据

    cout << "======== 恢复数据 ============" << endl;
    editor->resotre(snapshot);
    editor->display();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //备忘录模式
    std::shared_ptr<Originator> editor = std::make_shared<Editor>(); //数据产生者
    editor->display();                                               //显示数据

    //设置数据
    editor->setText("下班吃鱼记得带雨伞,可能会下大雨 ...");
    editor->setCursor(4.4, 5.5);
    editor->setSelectionWidth(7.8);
    editor->display(); //显示数据

    //保存数据
    std::shared_ptr<Memento> snapshot = editor->createSnapshot(); //获取到保存数据的备忘录

    //设置数据
    editor->setText("下班我不回家了 ...");
    editor->setCursor(3.1, 2.8);
    editor->setSelectionWidth(6.5);
    editor->display(); //显示数据

    cout << "======== 恢复数据 ============" << endl;
    editor->resotre(snapshot);
    editor->display();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //备忘录模式
    std::shared_ptr<Originator> editor = std::make_shared<Editor>();            //数据产生着
    std::shared_ptr<CareTaker> caretaker = std::make_shared<CareTaker>(editor); //管理者

    //设置数据
    editor->setText("下班我不回家了 ...");
    editor->setCursor(3.1, 2.8);
    editor->setSelectionWidth(6.5);
    editor->display(); //显示数据
    caretaker->save(); //使用备忘录保存数据

    editor->setText("下班吃鱼记得带雨伞,可能会下大雨 ...");
    editor->setCursor(3.2, 4.7);
    editor->setSelectionWidth(8.8);
    editor->display(); //显示数据
    caretaker->save(); //使用备忘录保存数据

    editor->setText("我要去做核酸了,么么哒 ...");
    editor->setCursor(1.5, 4.2);
    editor->setSelectionWidth(9.8);
    editor->display(); //显示数据
    caretaker->save(); //使用备忘录保存数据

    cout << "=================== 恢复数据 ===================" << endl;
    caretaker->rollback(1); //恢复索引为1的历史记录
    editor->display();      //显示数据

    caretaker->undo(); //恢复最近一次历史记录
    editor->display(); //显示数据

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}