#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //访问者模式
    std::shared_ptr<Entry> text1 = std::make_shared<File>("logcat.text", 45);
    std::shared_ptr<Entry> text2 = std::make_shared<File>("111.text", 33);
    text1->printList();
    text2->printList();

    std::shared_ptr<Entry> root = std::make_shared<Directory>("root");
    root->addEntry(text1);
    root->addEntry(text2);

    root->printList();

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