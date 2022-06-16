#include "./include/Sample.h"

void test1()
{
    cout << endl;
    cout << "test1():: ..." << endl;
    //责任链模式 - 使用智能指针
    std::shared_ptr<CarHandle> headHandle = std::make_shared<HeadCarHandle>();
    std::shared_ptr<CarHandle> bodyHandle = std::make_shared<BodyCarHandle>();
    std::shared_ptr<CarHandle> tailHandle = std::make_shared<TailCarHandle>();

    //设置下一个处理单元
    headHandle->setNextHandle(bodyHandle);
    bodyHandle->setNextHandle(tailHandle);
    tailHandle->setNextHandle(nullptr);

    //通过指针调用函数
    headHandle->handleCar();//造车流程
    cout << endl;
}

void test2()
{
    cout << endl;
    cout << "test2():: ..." << endl;
    //责任链模式 - 使用智能指针
    std::shared_ptr<CarHandle> headHandle = std::make_shared<HeadCarHandle>();
    std::shared_ptr<CarHandle> bodyHandle = std::make_shared<BodyCarHandle>();
    std::shared_ptr<CarHandle> tailHandle = std::make_shared<TailCarHandle>();

    //设置下一个处理单元
    headHandle->setNextHandle(tailHandle);
    tailHandle->setNextHandle(bodyHandle);
    bodyHandle->setNextHandle(nullptr);

    //通过指针调用函数
    headHandle->handleCar();//造车流程
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