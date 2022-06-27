#include "../include/UnitedNationsSecurityCouncil.h"

UnitedNationsSecurityCouncil::UnitedNationsSecurityCouncil()
{
    cout << "UnitedNationsSecurityCouncil()构造函数" << endl;
}

UnitedNationsSecurityCouncil::~UnitedNationsSecurityCouncil()
{
    cout << "~UnitedNationsSecurityCouncil()析构函数" << endl;
}

void UnitedNationsSecurityCouncil::setUSA(Country *usa)
{
    this->usa = usa;
}

void UnitedNationsSecurityCouncil::setIraq(Country *iraq)
{
    this->iraq = iraq;
}

/**
 * @brief 中介把一个国家发布的消息通知给另外一个国家
 * 
 * @param country 发布消息的国家
 * @param message 发布的消息
 */
void UnitedNationsSecurityCouncil::declare(Country * country,const std::string & message)
{
   //cout << "UnitedNationsSecurityCouncil::declare():: 通过联合国发布消息 ..." << endl; 
   this->declare1(country,message);//方式1发布消息
   this->declare2(country,message);//方式2发布消息
}

void UnitedNationsSecurityCouncil::declare1(Country * country,const std::string & message)
{
    //cout << "UnitedNationsSecurityCouncil::declare1():: " << endl;
    const USA *usa_ = dynamic_cast<const USA *>(country);
    const Iraq *iraq_ = dynamic_cast<const Iraq *>(country);
    if(nullptr != usa_)
    {
        //美方发布消息
        if(this->iraq != nullptr)
        {
            //伊拉克获得美方发布的消息
            this->iraq->getMessage(message);
        }
    }

    if(nullptr != iraq_)
    {
        //伊拉克发布消息
        if(this->usa != nullptr)
        {
            //美方获得伊拉克发布的消息
            this->usa->getMessage(message);
        }
    }
}

void UnitedNationsSecurityCouncil::declare2(Country * country,const std::string & message)
{
    //cout << "UnitedNationsSecurityCouncil::declare2():: " << endl;
    if(this->usa != nullptr)
    {
        if(this->usa == country)
        {
            //美方发布消息
            if(this->iraq != nullptr)
            {
                 //美方获得伊拉克发布的消息
                this->iraq->getMessage(message);
            } 
        }
    }

    if(this->iraq != nullptr)
    {
        if(this->iraq == country)
        {
            //伊拉克发布消息
            if(this->usa != nullptr)
            {
                //美方获得伊拉克发布的消息
                this->usa->getMessage(message);
            } 
        }
    } 
}