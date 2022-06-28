#ifndef ICOLLEAGUE_H
#define ICOLLEAGUE_H

#include "./Global.h"

/**
 * @brief 抽象类: 抽象消息发布者(同仁)
 *
 */
class IColleague
{
private:
    std::string name;    //姓名
    std::string content; //发布内容

public:
    IColleague(std::string name); //构造函数
    virtual ~IColleague() = default;
    std::string getName();                //获取姓名
    std::string getContent();             //获取发布内容
    void setContent(std::string content); //设置内容

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 谈话
     *
     */
    virtual void talk() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 接收到消息
     * @param msg 接收到的消息
     */
    virtual void receive(std::string msg) = 0;
};
#endif