#ifndef UNITED_NATIONS_SECURITY_COUNCIL_H
#define UNITED_NATIONS_SECURITY_COUNCIL_H

#include "./UniteNations.h"
#include "./Country.h"
#include "./USA.h"
#include "./Iraq.h"

/**
 * @brief 中介者: 联合国安理会
 * 
 */
class UnitedNationsSecurityCouncil : public UniteNations
{
    private:
        Country *usa = nullptr;//美国
        Country *iraq = nullptr;//伊拉克  

    public:
        UnitedNationsSecurityCouncil();
        ~UnitedNationsSecurityCouncil();
        virtual void declare(Country * country,const std::string & message) override;//实现declare()函数
        void setUSA(Country *usa);//设置美国
        void setIraq(Country *iraq);//设置伊拉克

    private:
        void declare1(Country * country,const std::string & message);
        void declare2(Country * country,const std::string & message);
};
#endif