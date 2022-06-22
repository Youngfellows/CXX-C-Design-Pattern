#include "../include/ToolBox.h"

//在类外初始化静态属性
std::shared_ptr<std::mutex> ToolBox::mMutex = nullptr;
ToolBox * ToolBox::mInstance = nullptr;

ToolBox::ToolBox()
{
    cout << "ToolBox()构造函数" << endl;
    this->toolFactory = std::make_shared<ToolFactory>();
    this->mToolMap = std::make_shared<std::map<string,std::shared_ptr<Tool>>>();
    this->mMutex = std::make_shared<std::mutex>();
    //插入元素
    // this->mToolMap->insert(std::pair<string,std::shared_ptr<Tool>>(ANDROID_STUDIO,std::make_shared<AndroidStudio>()));
    // this->mToolMap->insert(std::pair<string,std::shared_ptr<Tool>>(AUDACITY,std::make_shared<Audacity>()));
    // this->mToolMap->insert(std::pair<string,std::shared_ptr<Tool>>(PYCHARM,std::make_shared<PyCharm>()));
}

ToolBox::~ToolBox()
{
    cout << "~ToolBox()析构函数" << endl;
    this->mToolMap->clear();
    this->toolFactory = nullptr;
}

/**
 * @brief 获取单例
 * 
 * @return ToolBox* 返回工具集的指针变量
 */
ToolBox * ToolBox::getInstance()
{
    if(mInstance == nullptr)
    {   
        //自动上锁、自动解锁
        std::shared_ptr<std::lock_guard<std::mutex>> lockGuard = std::make_shared<std::lock_guard<std::mutex>>(*mMutex);
        if(mInstance == nullptr)
        {
            mInstance = new ToolBox();
        }
    }
    return mInstance;
}

/**
 * @brief 根据类型获取工具
 * 
 * @param key 工具类型名称
 * @return std::shared_ptr<Tool> 返回工具的指针变量
 */
std::shared_ptr<Tool> ToolBox::getTool(const string key)
{
    std::shared_ptr<Tool> tool = nullptr;
    auto iter = this->mToolMap->find(key);
    if(iter == this->mToolMap->end())
    {
        tool = this->toolFactory->create(key);
        cout << "添加名称为:" << key << "的工具 ..." << endl;
    }else
    {
        tool = iter->second;
        cout << "找到名称为:" << key << "的工具" << endl;
    }
    return tool;
}