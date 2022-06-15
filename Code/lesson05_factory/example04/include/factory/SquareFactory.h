#ifndef SQUARE_FACTORY_H
#define SQUARE_FACTORY_H

#include "../IShapeFactory.h"
#include "../product/Square.h"

/**
 * @brief 具体工厂: 生产正方形的工厂
 * 
 */
class SquareFactory : public IShapeFactory
{
    private:
        float length;//边长

    public:
        SquareFactory();
        SquareFactory(float length);
        ~SquareFactory();
        virtual std::shared_ptr<IShape> create() override;//覆写create()函数
};

#endif