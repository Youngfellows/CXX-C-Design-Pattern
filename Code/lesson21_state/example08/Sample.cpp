#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    std::shared_ptr<IForumAccount> account = std::make_shared<ForumAccount>("周芷若", "zhouzhiruo@gmail.com");
    account->downloadFile(20);
    account->writeNote(30);
    account->replyNote(10);
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //状态模式
    std::shared_ptr<IForumAccount> account = std::make_shared<ForumAccount>("赵敏", "zhaomin@gmail.com");
    account->downloadFile(10);

    account->writeNote(30);
    account->replyNote(110); //积分增加,变成高手

    account->downloadFile(50); //消耗积分,又变回新手了

    account->writeNote(650);    //积分增加,变成高手
    account->replyNote(700);    //积分增加,变成专家
    account->downloadFile(100); //消耗积分
    account->downloadFile(50);  //消耗积分
    account->downloadFile(800); //消耗积分

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