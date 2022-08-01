#ifndef LIE_PRONE_STATE_H
#define LIE_PRONE_STATE_H

#include "../Global.h"
#include "../interface/IState.h"
#include "./StandState.h"
#include "./SquatState.h"

/**
 * @brief 派生类: 匍匐状态
 *
 */
class LieProneState : public IState
{
public:
    class AutoDeletor
    {
    public:
        AutoDeletor() = default;
        ~AutoDeletor()
        {
            if (nullptr != pLieProneState)
            {
                delete pLieProneState;
                pLieProneState = nullptr;
            }
        };
    };

private:
    LieProneState();
    static IState *pLieProneState;  //单例
    static AutoDeletor autoDeletor; //内存释放器
    static std::mutex mMutex;       //互斥锁

public:
    ~LieProneState();
    static IState *getInstance();                  //获取单例
    virtual void down(IPerson *person) override;   //下一个状态
    virtual void up(IPerson *person) override;     //上一个状态
    virtual void action(IPerson *person) override; //当前状态做某事
};
#endif