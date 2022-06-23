#ifndef AMPHIBIAN_DECORATOR_H
#define AMPHIBIAN_DECORATOR_H

#include "./TankDecorator.h"

/**
 * @brief 派生类: 两栖登陆式坦克装饰器
 * 
 */
class AmphibianDecorator : public TankDecorator
{
    private:
        string amphibian;//两栖登陆式样

    public:
        AmphibianDecorator(std::unique_ptr<Tank> tank);
        ~AmphibianDecorator() = default;
        virtual void shot() override;//实现shot()函数
        virtual void run() override;//实现run()函数
        virtual string tankName() override;//实现tankName()函数

    private:
        void setAmphibian(const string &amphibian);//设置两栖登陆式样
        string getAmphibian();//获取两栖登陆式样
};

#endif