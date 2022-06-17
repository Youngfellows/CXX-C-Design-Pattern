#include "../include/ContreteContainer.h"

ContreteContainer::ContreteContainer()
{
    cout << "ContreteContainer()构造函数" << endl;
    data = std::make_shared<vector<std::shared_ptr<Object>>>();
}

ContreteContainer::ContreteContainer(ContreteContainer & other)
{
    data = other.data;
}

ContreteContainer::~ContreteContainer()
{
    cout << "ContreteContainer()析构函数" << endl;
    if(data != nullptr)
    {
       for(std::shared_ptr<Object> ele : *data)
       {
           ele = nullptr;
       }
       this->data->clear();
    }
}

void ContreteContainer::add(std::shared_ptr<Object> item)//覆写add()函数
{
    this->data->push_back(item);
    //cout << "ContreteContainer::add():: " << *item << ",size:"<< this->data->size() << endl;
}

/**
 * @brief 覆写remove()函数,移除元素
 * 
 * @param pos 移除元素的位置
 */
void ContreteContainer::remove(std::shared_ptr<Object> pos)
{
   auto iter = this->data->begin();
   for(iter = this->data->begin(); iter != this->data->end(); iter++)
   {
       if(*pos == **iter)
       {
            this->data->erase(iter);
            *iter = nullptr;
       }
   }
}

/**
 * @brief 覆写size()函数,返回容器大小
 * 
 * @return int 返回容器大小
 */
int ContreteContainer::size()
{
    //cout << "ContreteContainer::size():: size:" << this->data->size() << endl;
    return this->data->size();
}

/**
 * @brief 覆写getItem()函数
 * 
 * @param index 获取指定位置元素
 * @return std::shared_ptr<Object> 
 */
std::shared_ptr<Object> ContreteContainer::getItem(int index)
{
    if(index < this->size() - 1)
    {
        //cout << "ContreteContainer::getItem():: index=" << index << endl;
        return this->data->at(index);
    }
    return nullptr;
}

/**
 * @brief 覆写createIterator()函数,获取迭代器
 * 
 * @return std::shared_ptr<Iterator> 返回迭代器指针变量
 */
std::shared_ptr<Iterator> ContreteContainer::createIterator()
{
    //传递this很重要
    return std::make_shared<ContreteIterator>(std::make_shared<ContreteContainer>(*this));
}