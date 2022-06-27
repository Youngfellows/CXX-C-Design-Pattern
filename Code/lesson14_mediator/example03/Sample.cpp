#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //中介者模式,通过中介找对象
    Momo *momo = new Momo();//创建中介,陌陌交友平台

    //创建男生张三丰
    Condition * zsfSelfCondi = new Condition(true,false,"深圳","医生",222);//张三丰有房,无车
    Condition * zsfCondi = new Condition(false,true,"广州","教师",111);//张三丰要求对象,
    Man *zhangshanfeng = new Man("张三丰","男",88,zsfSelfCondi,zsfCondi,momo);//创建男生,张三丰

    //创建男生杨过
    Condition * ygSelfCondi = new Condition(true,true,"惠州","工程师",36000);//杨过有房,无车
    Condition * ygCondi = new Condition(true,false,"东莞","产品",4000);//杨过要求对象,
    Man *yangguo = new Man("杨过","男",27,ygSelfCondi,ygCondi,momo);//创建男生,杨过
    
    //创建女生赵敏
    Condition * zmSelfCondi = new Condition(true,false,"东莞","产品",6000);//赵敏有房,无车
    Condition * zmCondi = new Condition(true,true,"惠州","工程师",29000);//赵敏要求对象
    WoMan *zhaoming = new WoMan("赵敏","女",22,zmSelfCondi,zmCondi,momo);//创建女生,赵敏

    //女生找对象,通过中介
    zhaoming->getParter(zhangshanfeng);//介绍张三丰给赵敏
    zhaoming->getParter(yangguo);//介绍杨过给赵敏

    //释放内存
    delete zhaoming;
    delete zmCondi;
    delete zmSelfCondi;

    delete yangguo;
    delete ygCondi;
    delete ygSelfCondi;

    delete zhangshanfeng;
    delete zsfCondi;
    delete zsfSelfCondi;

    delete momo;

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