#ifndef DIRECTOR_H
#define DIRECTOR_H

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
     * @brief 纯虚函数,抽象接口
     * @brief 建造房子
     *
     */
    virtual void construct() = 0;
};

#endif