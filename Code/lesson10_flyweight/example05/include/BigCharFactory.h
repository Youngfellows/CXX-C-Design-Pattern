#ifndef BIG_CHAR_FACTORY_H
#define BIG_CHAR_FACTORY_H

#include "./BigChar.h"

/**
 * @brief 单例模式
 * 
 */
class BigCharFactory
{
    private:
        BigCharFactory();
        static BigCharFactory *mInstance;//声明mInstance变量
        static std::shared_ptr<mutex> mMutex;//声明互斥量
        std::shared_ptr<std::unordered_map<int,std::shared_ptr<BigChar>>> mNumberMap = nullptr;//保存数字的列表

    public:
        ~BigCharFactory();
        static BigCharFactory * getInstance();//获取单例
        std::shared_ptr<BigChar> getBigChar(int order);//获取数字字符
};
#endif