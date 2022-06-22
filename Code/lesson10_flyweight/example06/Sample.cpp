#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //享元模式,获取单例工厂
    CharacterFactory *factory = CharacterFactory::getInstance();

    //获取字符A
    std::shared_ptr<ICharacter> character = factory->getCharacter("A");
    character->display();
    //设置字体属性
    character->setSize(115,245);
    character->setCharColor("红色");
    character->display();
    
    //获取字符B
    character = factory->getCharacter("B");
    character->display();
    //设置字体属性
    character->setSize(128,88);
    character->setCharColor("绿色");
    character->display();

    //获取字符A
    character = factory->getCharacter("A");
    character->display();
    //设置字体属性
    character->setSize(173,99);
    character->setCharColor("蓝色");
    character->display();

    //获取字符B
    character = factory->getCharacter("B");
    character->display();
    //设置字体属性
    character->setSize(76,155);
    character->setCharColor("灰色");
    character->display();

    //获取字符C
    character = factory->getCharacter("C");
    character->display();

    //释放内存
    delete factory;
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