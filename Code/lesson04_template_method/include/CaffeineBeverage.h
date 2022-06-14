#ifndef CAFFEINE_BEVERAGE_H
#define CAFFEINE_BEVERAGE_H

#include "./Global.h"

namespace caffeine{

    /**
     * @brief 定义抽象类 - 咖啡饮品
     * 
     */
    class CaffeineBeverage
    {
        public:
            virtual ~CaffeineBeverage();

            /**
             * @brief 模板方法 - 定义好制作流程 - 烹饪饮品
             * 
             */
            void prepareRecipe();

            /**
             * @brief 冲泡 - 抽象方法 - 纯虚函数 - 子类必须实现
             * 
             */
            virtual void brew() = 0;

            /**
             * @brief 添加调味品 - 抽象方法 - 纯虚函数 - 子类必须实现
             * 
             */
            virtual void addCondiments() = 0;

        protected:
        
            /**
             * @brief 把水煮沸
             * 
             */
            void boilWater();

            /**
             * @brief 倒入杯中
             * 
             */
            void pourInCup();

    };
}
#endif