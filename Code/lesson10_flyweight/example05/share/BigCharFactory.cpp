#include "../include/BigCharFactory.h"

//在类外初始化静态变量
BigCharFactory * BigCharFactory::mInstance = nullptr;
std::shared_ptr<mutex> BigCharFactory::mMutex = nullptr;

BigCharFactory::BigCharFactory()
{
    cout << "BigCharFactory()私有构造函数" << endl;
    this->mNumberMap = std::make_shared<std::unordered_map<int,std::shared_ptr<BigChar>>>();
    this->mMutex = std::make_shared<mutex>(); 
}

BigCharFactory::~BigCharFactory()
{
    //释放内存
    cout << "~BigCharFactory()析构函数" << endl;
    this->mNumberMap->clear();
}

/**
 * @brief 获取单例
 * 
 * @return BigCharFactory* 
 */
BigCharFactory * BigCharFactory::getInstance()
{
    if(mInstance == nullptr)
    {
        //自动上锁
        //std::lock_guard<std::mutex> lock(mMutex);
        std::shared_ptr<std::lock_guard<std::mutex>> lockGuard = std::make_shared<std::lock_guard<std::mutex>>(*mMutex);
        if(mInstance == nullptr)
        {
            mInstance = new BigCharFactory();
        }
    }
    return mInstance;
}

/**
 * @brief 根据索引获取字符数字
 * 
 * @param order 索引位置
 * @return std::shared_ptr<BigChar> 返回字符数字指针
 */
std::shared_ptr<BigChar> BigCharFactory::getBigChar(int order)
{
    std::shared_ptr<BigChar> bigChar = nullptr;//大字符指针变量
    int tOrder = order % 11;//取 0 ~ 10 的值
    auto iter = this->mNumberMap->find(tOrder);
    if(iter == this->mNumberMap->end())
    {
        bigChar = std::make_shared<BigChar>(tOrder);
        this->mNumberMap->insert({tOrder,bigChar});//插入元素到map容器
    }else
    {
        bigChar = iter->second;
    }
    return bigChar;
}
