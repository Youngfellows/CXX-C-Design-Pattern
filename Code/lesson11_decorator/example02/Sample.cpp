#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    //工程师
    Person *engineer = new Engineer("张无忌",23,"Android系统开发工程师");
    engineer->show();
    cout << endl;

    //空姐
    Person *stewardess = new Stewardess("周芷若",22,"中国南方航空");
    stewardess->show();
   
    //释放内存
    delete engineer;
    delete stewardess;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //装饰者模式
    std::shared_ptr<Person> engineer = std::make_shared<Engineer>("武松",40,"C++服务开发工程师");
    //未装扮
    engineer->show();
    cout << endl;

    //装扮一下
    engineer = std::make_shared<TShirts>(engineer);
    engineer->show();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //装饰者模式
    std::shared_ptr<Person> engineer = std::make_shared<Engineer>("杨过",25,"JAVA WEB后台开发工程师");
    //未装扮
    engineer->show();
    cout << endl;

    //装扮一下
    std::shared_ptr<Finery> finery = std::make_shared<TShirts>();
    finery->decorate(engineer);
    finery->show();
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //装饰者模式
    std::shared_ptr<Person> person = std::make_shared<Stewardess>("赵敏",26,"中国国际航空公司");
    //装饰空姐
    person = std::make_shared<HighHeeledShoes>(person);//高跟鞋
    person = std::make_shared<Dress>(person);//连衣裙
    person = std::make_shared<ShortSkirt>(person);//短裙

    //显示装饰后的空姐信息
    person->show();

    cout << endl;
}

void test5()
{
    cout << "test5():: ..." << endl;
    //装饰者模式,创建一个工程师,比较邋遢的
    std::shared_ptr<Person> person = std::make_shared<Engineer>("谢晓峰",37,"Python数据分析工程师");
    //装饰工程师
    person = std::make_shared<BigTrouser>(person);//大短裤
    person = std::make_shared<Sneakers>(person);//破球鞋
    person = std::make_shared<TShirts>(person);//T恤

    //显示装饰后的邋遢工程师
    person->show();

    cout << endl;
}

void test6()
{
    cout << "test6():: ..." << endl;
    //装饰者模式,创建一个工程师,比较邋遢的
    std::shared_ptr<Person> person = std::make_shared<Engineer>("燕十三",32,"Android系统开发工程师");
    //装饰工程师
    person = std::make_shared<Suit>(person);//西装
    person = std::make_shared<LeatherShoes>(person);//皮鞋
    person = std::make_shared<Tie>(person);//领带

    //显示装饰后的邋遢工程师
    person->show();
    cout << endl;
}