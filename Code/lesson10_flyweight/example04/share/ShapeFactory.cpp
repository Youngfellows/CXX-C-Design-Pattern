#include "../include/ShapeFactory.h"


//初始化静态属性
std::shared_ptr<std::mutex> ShapeFactory::mMutex = nullptr;
ShapeFactory * ShapeFactory::mInstance = nullptr;

ShapeFactory::ShapeFactory()
{
    cout << "ShapeFactory()构造函数" << endl;
    //this->circles = std::mak
}

ShapeFactory::~ShapeFactory()
{
    cout << "~ShapeFactory()析构函数" << endl;
}

/**
 * @brief 获取单例
 * 
 * @return ShapeFactory* 
 */
ShapeFactory * ShapeFactory::getInstance()
{
    if(mInstance == nullptr)
    {
        //lock_guard();
        mMutex->lock();
        if(mInstance == nullptr)
        {
            mInstance = new ShapeFactory();
        }
        mMutex->unlock();
    }
    return mInstance;
}

/**
* @brief 更加color颜色获取形状
* 
* @param color 颜色
* @return std::shared_ptr<Circle> 返回形状指针
*/
std::shared_ptr<Circle> ShapeFactory::getCircle1(string color)
{
    cout << "ShapeFactory::getCircle1():: color:" << color << endl;
    //std::shared_ptr<Circle> circle = nullptr;
    bool isEmpty = circles.empty();
    int size = circles.size();
    cout << "ShapeFactory::getCircle1():: isEmpty:" << isEmpty << ",size:" << size << endl;
    std::shared_ptr<Circle> circle = circles[color];
    if(circle == nullptr)
    {
        circle = std::make_shared<Circle>(color);//创建Circle指针对象
        circles[color] = circle;//插入元素
        cout << "ShapeFactory::getCircle1():: 创建圆形,颜色是" << color << endl;
    }  
    return circle;
}

/**
* @brief 更加color颜色获取形状
* 
* @param color 颜色
* @return std::shared_ptr<Circle> 返回形状指针
*/
std::shared_ptr<Circle> ShapeFactory::getCircle2(string color)
{
    //cout << "ShapeFactory::getCircle2():: color:" << color << endl;
    bool isEmpty = circles.empty();
    int size = circles.size();
    cout << "ShapeFactory::getCircle2():: isEmpty:" << isEmpty << ",size:" << size << endl;
    std::shared_ptr<Circle> circle = nullptr;
    auto iter = circles.find(color);
    if(iter == circles.end())
    {
        //没有找到元素
        circle = std::make_shared<Circle>(color);
        circles.insert(std::pair<string,std::shared_ptr<Circle>>(color,circle));
        cout << "ShapeFactory::getCircle2():: 创建圆形,颜色是" << color << endl;
    }else
    {
        circle = iter->second;//获取已经保存的Circle
    }
    return circle;
}
