#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //观察者模式
    std::shared_ptr<Subject> subject = std::make_shared<RandomNumGen>();                //被观察者
    std::shared_ptr<Observer> digitObserver = std::make_shared<DigitObserver>(subject); //观察者1
    std::shared_ptr<Observer> graphObserver = std::make_shared<GraphObserver>(subject); //观察者2

    //被观察者数据变化
    NumGen *numGen = dynamic_cast<NumGen *>(subject.get()); //类型转化
    if (numGen != nullptr)
    {
        numGen->excute(); //数据变化
    }

    cout << endl;
    cout << "移除观察者 ---- ^_^ ----" << endl;
    cout << endl;

    //移除观察者
    subject->deleteObserver(digitObserver.get());

    //被观察者数据变化
    numGen = dynamic_cast<NumGen *>(subject.get()); //类型转化
    if (numGen != nullptr)
    {
        numGen->excute(); //数据变化
    }

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