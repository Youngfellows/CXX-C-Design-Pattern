#ifndef CHARACTER_FACTORY_H
#define CHARACTER_FACTORY_H

#include "./Character.h"

/**
 * @brief 享元模式,单例来实现
 * 
 */
class CharacterFactory
{
    private:
        static CharacterFactory * mInstance;//声明静态属性
        static std::shared_ptr<std::mutex> mMutex;//声明静态属性,互斥量
        std::shared_ptr<std::map<string,std::shared_ptr<ICharacter>>> characterMap;//保存字符的map容器

    public:
        ~CharacterFactory();
        static CharacterFactory * getInstance();//单例
        std::shared_ptr<ICharacter> getCharacter(const string & key);//获取字符
        long count();//获取字符个数

    private:
        CharacterFactory();
};

#endif