#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //抽象工厂模式: 通过工厂生产产品族
    std::unique_ptr<IFactory> factory = CreateFactory::factory(FactoryType::SQL_FACTORY);

    //通过工厂创建产品: 数据库连接
    std::shared_ptr<DBConnection> dbConn = factory->createDBConnection();
     //通过工厂创建产品: 数据库命令
    std::shared_ptr<DBCommand> dbCmd = factory->createDBCommand(dbConn);

    //通过指针访问函数
    bool isSucce = dbCmd->excute("insert data to sql database");
    cout << "isSucce:" << isSucce << endl;
    if(isSucce)
    {
        cout << "执行SQL语句成功 ..." << endl;
    }else
    {
        cout << "执行SQL语句失败 ..." << endl;
    }

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //抽象工厂模式: 通过工厂生产产品族
    std::unique_ptr<IFactory> factory = CreateFactory::factory(FactoryType::ORACLE_FACTORY);

    //通过工厂创建产品: 数据库连接
    std::shared_ptr<DBConnection> dbConn = factory->createDBConnection();
     //通过工厂创建产品: 数据库命令
    std::shared_ptr<DBCommand> dbCmd = factory->createDBCommand(dbConn);

    //通过指针访问函数
    bool isSucce = dbCmd->excute("insert data to oracle database");
    cout << "isSucce:" << isSucce << endl;
    if(isSucce)
    {
        cout << "执行SQL语句成功 ..." << endl;
    }else
    {
        cout << "执行SQL语句失败 ..." << endl;
    }

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