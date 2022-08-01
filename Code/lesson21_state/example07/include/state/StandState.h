#ifndef STAND_STATE_H
#define STAND_STATE_H

#include "../Global.h"
#include "../interface/IState.h"
#include "./LieProneState.h"
#include "./SquatState.h"

/**
 * @brief 派生类: 站立状态
 *
 */
class StandState : public IState
{
public:
    class AutoDeletor
    {
    public:
        AutoDeletor() = default;
        ~AutoDeletor()
        {
            if (nullptr != pStandState)
            {
                delete pStandState;
                pStandState = nullptr;
            }
        };
    };

private:
    StandState();
    static IState *pStandState;     //单例
    static AutoDeletor autoDeletor; //内存释放器
    static std::mutex mMutex;       //互斥锁

public:
    ~StandState();
    static IState *getInstance();                  //获取单例
    virtual void down(IPerson *person) override;   //下一个状态
    virtual void up(IPerson *person) override;     //上一个状态
    virtual void action(IPerson *person) override; //当前状态做某事
};
#endif