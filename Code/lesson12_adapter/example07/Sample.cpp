#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    std::unique_ptr<Player> forwards = std::make_unique<Forwards>("梅西");
    std::unique_ptr<Player> center = std::make_unique<Center>("罗纳尔多");
    std::unique_ptr<Player> backwards = std::make_unique<Backwards>("罗本");

    forwards->attack();
    forwards->defence();

    center->attack();
    center->defence();

    backwards->attack();
    backwards->defence();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //外籍球员
    std::unique_ptr<ForeignPlayer> center = std::make_unique<ForeignCenter>("姚明");
    center->gong();
    center->shou();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    std::unique_ptr<Player> forwards = std::make_unique<Forwards>("迪马利亚");
    std::unique_ptr<Player> center = std::make_unique<Center>("姆巴佩");
    std::unique_ptr<Player> backwards = std::make_unique<Backwards>("贝克汉姆");

    forwards->attack();
    forwards->defence();

    center->attack();
    center->defence();

    backwards->attack();
    backwards->defence();

    //找个翻译,适配器
    std::unique_ptr<ForeignPlayer> foreignPlayer = std::make_unique<ForeignCenter>("易建联");
    std::unique_ptr<Player> player = std::make_unique<Translator>(std::move(foreignPlayer));//使用适配器适配一下,使外籍球员与本国球员也能交流
    player->attack();
    player->defence();

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}