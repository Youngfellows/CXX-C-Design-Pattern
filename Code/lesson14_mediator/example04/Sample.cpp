#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //使用中介者模式,聊天室显示用户聊天信息
    std::unique_ptr<User> yangguo = std::make_unique<User>("杨过");
    std::unique_ptr<User> xiaolongnv = std::make_unique<User>("小龙女");

    //发消息
    yangguo->sendMessage("姑姑,过儿想你啦,真的好想好想 ...");
    xiaolongnv->sendMessage("过儿,姑姑也超级想你,我们到绝情谷见一面吧 ...");

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