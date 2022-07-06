#include "../../include/observer/DigitObserver.h"

DigitObserver::DigitObserver()
{
    cout << "DigitObserver()构造函数" << endl;
}

DigitObserver::~DigitObserver()
{
    cout << "~DigitObserver()析构函数" << endl;
}

/**
 * @brief 接收到被观察者数据变化了
 *
 */
void DigitObserver::update()
{
    cout << "DigitObserver::update():: 接收到被观察者数据变化了 ..." << endl;
    //类型转化 Subject * 转化为 NumGen *
    NumGen *numGen = dynamic_cast<NumGen *>(this->subject.get()); //智能指针转化为普通指针
    if (numGen != nullptr)
    {
        int number = numGen->getNumber(); //获取被观察者变化的数据
        cout << "DigitObserver::update():: number:" << number << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1)); //休眠1秒
    }
}
