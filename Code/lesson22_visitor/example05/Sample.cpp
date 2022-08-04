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
    std::shared_ptr<Directory> root = std::make_shared<Directory>("root");
    std::shared_ptr<Directory> bin = std::make_shared<Directory>("bin");
    std::shared_ptr<Directory> tmp = std::make_shared<Directory>("tmp");
    std::shared_ptr<Directory> usr = std::make_shared<Directory>("usr");

    root->addEntry(bin);
    root->addEntry(tmp);
    root->addEntry(usr);
    bin->addEntry(std::make_shared<File>("vi", 3000));
    bin->addEntry(std::make_shared<File>("latex", 2000));
    auto list1 = std::make_shared<ListVisitor>();
    root->accept(list1);

    std::shared_ptr<Directory> yuki = std::make_shared<Directory>("yuki");
    std::shared_ptr<Directory> hanako = std::make_shared<Directory>("hanako");
    std::shared_ptr<Directory> tomura = std::make_shared<Directory>("tomura");

    usr->addEntry(yuki);
    usr->addEntry(hanako);
    usr->addEntry(tomura);
    yuki->addEntry(std::make_shared<File>("diary.html", 100));
    hanako->addEntry(std::make_shared<File>("memo.tex", 1024));
    tomura->addEntry(std::make_shared<File>("junk.mail", 40));
    auto list2 = std::make_shared<ListVisitor>();
    root->accept(list2);
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