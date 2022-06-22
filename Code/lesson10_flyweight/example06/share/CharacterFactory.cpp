#include "../include/CharacterFactory.h"

/**
 * @brief 在类外初始化静态属性
 * 
 */
CharacterFactory * CharacterFactory::mInstance = nullptr;
std::shared_ptr<std::mutex> CharacterFactory::mMutex = nullptr;

CharacterFactory::CharacterFactory()
{
    cout << "CharacterFactory()构造函数" << endl;
    this->characterMap = std::make_shared<std::map<string,std::shared_ptr<ICharacter>>>();
}

CharacterFactory::~CharacterFactory()
{
    cout << "~CharacterFactory()析构函数" << endl;
    this->characterMap->clear();
}

/**
 * @brief 单例模式
 * 
 * @return CharacterFactory* 返回CharacterFactory指针
 */
CharacterFactory * CharacterFactory::getInstance()
{
    if(mInstance == nullptr)
    {
        //自动上锁
        std::shared_ptr<std::lock_guard<std::mutex>> lockGuard = std::make_shared<std::lock_guard<std::mutex>>(*mMutex);
        if(mInstance == nullptr)
        {
            mInstance = new CharacterFactory();
        }
    }
    return mInstance;
}

/**
 * @brief 根据名称获取字符
 * 
 * @param key 字符名称
 * @return std::shared_ptr<ICharacter> 返回字符的指针对象
 */
std::shared_ptr<ICharacter> CharacterFactory::getCharacter(const string & key)
{
    std::shared_ptr<ICharacter> character = nullptr;
    auto iter = this->characterMap->find(key);
    if(iter == this->characterMap->end())
    {
        //没有找到,插入容器中
        character = std::make_shared<Character>(key);
        this->characterMap->insert(std::pair<string,std::shared_ptr<ICharacter>>(key,character));
        cout << "插入:" << key << endl;
    }else
    {
        character = iter->second;
        cout << "已经存在:" << key << endl;
    }
    return character;
}

/**
 * @brief 获取容器大小
 * 
 * @return long 返回容器大小
 */
long CharacterFactory::count()
{
    return this->characterMap->size();
}
