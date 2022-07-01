#ifndef HOUSE_H
#define HOUSE_H

#include "./Global.h"

/**
 * @brief 抽象基类: 抽象房子
 *
 */
class House
{
public:
    virtual ~House() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置地板
     *
     * @param ground 地板
     */
    virtual void setGround(std::string ground) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置墙壁
     *
     * @param wall 墙壁
     */
    virtual void setWall(std::string wall) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置窗户
     *
     * @param window 窗户
     */
    virtual void setWindow(std::string window) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置门
     *
     * @param door 门
     */
    virtual void setDoor(std::string door) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 设置屋顶
     *
     * @param roof 屋顶
     */
    virtual void setRoof(std::string roof) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取地板
     *
     * @return std::string 返回地板
     */
    virtual std::string getGround() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取墙壁
     *
     * @return std::string 返回墙壁
     */
    virtual std::string getWall() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取窗
     *
     * @return std::string 返回窗
     */
    virtual std::string getWindow() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取门
     *
     * @return std::string 返回门
     */
    virtual std::string getDoor() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 获取屋顶
     *
     * @return std::string 返回屋顶
     */
    virtual std::string getRoof() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 显示房子信息
     *
     */
    virtual void showHouse() = 0;
};

#endif