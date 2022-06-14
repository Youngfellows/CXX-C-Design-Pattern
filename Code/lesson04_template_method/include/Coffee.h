#ifndef COFFEE_H
#define COFFEE_H

#include "./CaffeineBeverage.h"

namespace caffeine
{
    /**
     * @brief 具体类: 冲咖啡
     * 
     */
    class Coffee : public CaffeineBeverage
    {
        public:
            Coffee();
            ~Coffee();
            void brew() override;
            void addCondiments() override;
    };    
}

#endif