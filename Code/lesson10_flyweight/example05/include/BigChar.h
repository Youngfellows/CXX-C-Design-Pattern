#ifndef BIGCHAR_H
#define BIGCHAR_H

#include "./Global.h"

/**
 * @brief 实体类: 数字大字符
 * 
 */
class BigChar
{
    private:
        const char *number;//数字字符串   

    public:
        BigChar(int order);
        ~BigChar();
        void show();
};
#endif