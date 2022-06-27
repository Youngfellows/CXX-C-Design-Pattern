#include "../include/Momo.h"

/**
 * @brief 通过中介找对象
 *
 * @param man 男人
 * @param woman 女人
 * @return true 匹配
 * @return false 不合适
 */
bool Momo::getParter(Person *man, Person *woman)
{
    cout << "Momo::getParter():: " << man->getName() << "," << woman->getName() << endl;
    if ((man->getSex().compare(woman->getSex())) == 0)
    {
        cout << "同性恋之间不能找对象 ..." << endl;
        return false;
    }

    cout << "Momo::getParter():: 111 ..." << endl;
    //女生满足男生的条件
    bool allowMan_ = this->manAllow(man,woman); //男生满意女生
    //男生满足女生的条件
    bool allowWoman_ = this->womanAllow(man,woman); //女生满意男生

    if (allowMan_ && allowWoman_)
    {
        cout << man->getName() << "和" << woman->getName() << "绝配 ..." << endl;
        return true;
    }
    else
    {
        cout << man->getName() << "和" << woman->getName() << "不配 ..." << endl;
        return false;
    }
}

/**
 * @brief 男生是否满意女生
 *
 * @param man 男人信息
 * @param woman 女生信息
 * @return true 返回男生满意女生
 * @return false 返回男生不满意女生
 */
bool Momo::manAllow(Person *man, Person *woman)
{
    cout << "Momo::manAllow():: ..." << endl;
    //man->toString();
    //woman->toString();

    //是否相互喜欢,满足对方的条件
    Condition *manCondi = man->getCondition();             //男人要求条件
    //Condition *womanCondi = woman->getCondition();         //女人要求条件
    //Condition *manSelfCondi = man->getSelfCondition();     //男生自身条件
    Condition *womanSelfCondi = woman->getSelfCondition(); //女人自身条件

    //cout << "Momo::manAllow():: manCondi:" << manCondi << endl;
    //cout << "Momo::manAllow():: womanSelfCondi:" << womanSelfCondi << endl;


    //女生条件比男生要求的好
    bool isMatchAddr = womanSelfCondi->getAddress().compare(manCondi->getAddress()) == 0; //女生地址是否男生要求的地址
    bool isMatchDeposit = womanSelfCondi->getDeposit() >= manCondi->getDeposit();    //女生工资比男生要求的高
    bool isMatchJob = womanSelfCondi->getJob().compare(manCondi->getJob()) == 0;          //是男生想要的工作
    bool isMatchCar = womanSelfCondi->haveCar() == manCondi->haveCar();              //男生要求女生是否有车
    bool isMatchHouse = womanSelfCondi->haveHouse() == manCondi->haveHouse();          //男生要求女生是否有房子
    // cout << "Momo::manAllow():: 女生是否满足男生要求的条件 ..." << endl;
    // cout << "Momo::manAllow():: isMatchAddr:" << isMatchAddr << endl;
    // cout << "Momo::manAllow():: isMatchDeposit:" << isMatchDeposit << endl;
    // cout << "Momo::manAllow():: isMatchJob:" << isMatchJob << endl;
    // cout << "Momo::manAllow():: isMatchCar:" << isMatchCar << endl;
    // cout << "Momo::manAllow():: isMatchHouse:" << isMatchHouse << endl;

    bool isMatch = isMatchAddr && isMatchDeposit && isMatchJob && isMatchCar && isMatchHouse;
    return isMatch;
}

/**
 * @brief 女生是否满意男生
 *
 * @param man 男人信息
 * @param woman 女生信息
 * @return true 返回女生满意男生
 * @return false 返回女生满意男生
 */
bool Momo::womanAllow(Person *man, Person *woman)
{
    cout << "Momo::womanAllow():: ..." << endl;
    //是否相互喜欢,满足对方的条件
    //Condition *manCondi = man->getCondition();             //男人要求条件
    Condition *womanCondi = woman->getCondition();         //女人要求条件
    Condition *manSelfCondi = man->getSelfCondition();     //男生自身条件
    //Condition *womanSelfCondi = woman->getSelfCondition(); //女人自身条件

    //男生条件比女生要求的好
    bool isMatchAddr = manSelfCondi->getAddress().compare(womanCondi->getAddress()) == 0; //男生地址是否女生要求的地址
    bool isMatchDeposit = manSelfCondi->getDeposit() >= womanCondi->getDeposit();    //男生工资比女生要求的高
    bool isMatchJob = manSelfCondi->getJob().compare(womanCondi->getJob()) == 0;          //是女生想要的工作
    bool isMatchCar = manSelfCondi->haveCar() == womanCondi->haveCar();              //女生要求男生是否有车
    bool isMatchHouse = manSelfCondi->haveHouse() == womanCondi->haveHouse();          //女生要求男生是否有房子
    // cout << "Momo::womanAllow():: 男生是否满足女生要求的条件 ..." << endl;
    // cout << "Momo::womanAllow():: isMatchAddr:" << isMatchAddr << endl;
    // cout << "Momo::womanAllow():: isMatchDeposit:" << isMatchDeposit << endl;
    // cout << "Momo::womanAllow():: isMatchJob:" << isMatchJob << endl;
    // cout << "Momo::womanAllow():: isMatchCar:" << isMatchCar << endl;
    // cout << "Momo::womanAllow():: isMatchHouse:" << isMatchHouse << endl;

    bool isMatch = isMatchAddr && isMatchDeposit && isMatchJob && isMatchCar && isMatchHouse;
    return isMatch;
}
