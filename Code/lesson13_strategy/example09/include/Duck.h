#ifndef DUCK_H
#define DUCK_H

#include "./Global.h"
#include "./FlyBehavior.h"
#include "./QuackBehavior.h"

/**
 * @brief 实体类: 鸭子
 * 
 */
class Duck
{
    public:
        std::unique_ptr<FlyBehavior> flyBehavior;//飞的行为
        std::unique_ptr<QuackBehavior> quackBehavior;//叫的行为

    public:
        Duck() = default;
        virtual ~Duck() = default;

        Duck(std::unique_ptr<FlyBehavior> fb, std::unique_ptr<QuackBehavior> qb) : flyBehavior(std::move(fb)), quackBehavior(std::move(qb)) 
        {

        }

        /**
         * @brief 下面函数使用了多态
         * @brief 执行飞的行为
         * 
         */
        void performFly()
        {
            flyBehavior->fly();
        }

        /**
         * @brief 下面函数使用了多态
         * @brief 执行叫的行为
         * 
         */
        void performQuack()
        {
            quackBehavior->quack();
        }

        /**
         * @brief 共有属性,都能游泳
         * 
         */
        void swim()
        {
            std::cout << "所有鸭子都能游泳 ..." << std::endl;
        }

        /**
         * @brief 抽象方法,之类选择覆写
         * 
         */
        virtual void display()
        {

        }
};


#endif