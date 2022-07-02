#ifndef PERSON_H
#define PERSON_H

/**
 * @brief 抽象类: 人
 *
 */
class Person
{
public:
    virtual ~Person() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 画头
     */
    virtual void drawHead() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 画手
     */
    virtual void drawHand() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 画身体
     */
    virtual void drawBody() = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 画脚
     */
    virtual void drawFoot() = 0;
};
#endif