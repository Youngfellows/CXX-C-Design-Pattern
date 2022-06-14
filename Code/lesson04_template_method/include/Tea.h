#ifndef TEA_H
#define TEA_H

#include "./CaffeineBeverage.h"

namespace caffeine
{
    /**
     * @brief 具体类: 冲咖啡
     * 
     */
    class Tea : public CaffeineBeverage
    {
        public:
            Tea();
            ~Tea();
            void brew() override;
            void addCondiments() override;
    };    
}

#endif