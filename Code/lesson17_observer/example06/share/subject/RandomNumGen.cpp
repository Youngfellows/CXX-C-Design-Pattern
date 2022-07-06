#include "../../include/subject/RandomNumGen.h"

RandomNumGen::RandomNumGen()
{
    cout << "RandomNumGen()构造函数" << endl;
}

RandomNumGen::~RandomNumGen()
{
    cout << "~RandomNumGen()析构函数" << endl;
}

/**
 * @brief 产生随机数
 *
 */
void RandomNumGen::excute()
{
    cout << "RandomNumGen::excute():: ..." << endl;
    for (int i = 0; i < 20; i++)
    {
        this->m_number = m_dis(m_gen); //产生随机数
        notifyObservers();             //通知所有的观察者,数据变化了
    }
}

/**
 * @brief 获取产生的随机数
 *
 * @return int 返回产生的随机数
 */
int RandomNumGen::getNumber()
{
    return this->m_number;
}
