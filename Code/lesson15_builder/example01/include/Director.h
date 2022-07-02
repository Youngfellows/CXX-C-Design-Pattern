#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "./House.h"
#include "./Builder.h"

/**
 * @brief 设计师(指挥者)负责建造逻辑
 * @brief 建筑队干具体的活
 *
 */
class Director
{

public:
    virtual ~Director() = default;

    /**
     * @brief 设置工程队
     *
     * @param builder 要是设置的工程队
     */
    virtual void setBuilder(std::shared_ptr<Builder> builder) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 建造房子
     *
     */
    virtual void construct() = 0;

    /**
     * @brief 获取建筑师指挥工程队建设的房子
     *
     * @return std::shared_ptr<House> 返回工程队建设的房子
     */
    virtual std::shared_ptr<House> getHouse() = 0;
};

#endif