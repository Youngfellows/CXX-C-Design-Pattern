#ifndef BORDER_H
#define BORDER_H

#include "./IDisplay.h"

/**
 * @brief 抽象类: 装饰器装饰被装饰对象IDisplay
 * 
 */
class Border : public IDisplay
{
    public:
        Border(IDisplay *display) : m_display(display) {}
        virtual ~Border()
        {
            delete m_display;
        }

    protected:
        IDisplay *m_display;//被装饰对象
};

#endif