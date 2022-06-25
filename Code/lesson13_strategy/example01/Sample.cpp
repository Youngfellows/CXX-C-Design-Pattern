#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //直接使用算法
    std::unique_ptr<Strategy> aes = std::make_unique<AES>();
    aes->crypt();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    // 算法的实现和客户端的使用解耦合
    // 使得算法变化，不会影响客户端
    std::unique_ptr<Strategy> aes = std::make_unique<AES>();
    std::unique_ptr<Context> client = std::make_unique<Context>(std::move(aes));
    client->myoperator();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;\
    std::unique_ptr<Strategy> des = std::make_unique<DES>();
    std::unique_ptr<Context> client = std::make_unique<Context>();
    client->setStrategy(std::move(des));
    client->myoperator();
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    std::unique_ptr<Strategy> rsa = std::make_unique<RSA>();
    std::unique_ptr<Context> client = std::make_unique<Context>();
    client->setStrategy(std::move(rsa));
    client->myoperator();
    cout << endl;
}