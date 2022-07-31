#ifndef IPROCESS_H
#define IPROCESS_H

#include "../Global.h"
#include "./IState.h"

//先声明类,后面再定义
class IState;

class IProcess
{
public:
    virtual ~IProcess() = default;
    virtual std::string getName() = 0;                        //获取处理器名称
    virtual void setState(std::shared_ptr<IState> state) = 0; //设置状态
    virtual std::shared_ptr<IState> getReadyState() = 0;      //获取就绪状态
    virtual std::shared_ptr<IState> getRunningState() = 0;    //获取运行状态
    virtual std::shared_ptr<IState> getBlockedState() = 0;    //获取阻塞状态
    virtual void resumedByCpu() = 0;                          //由CPU恢复
    virtual void timeSlotEnd() = 0;                           //时间片结束
    virtual void needIO() = 0;                                //需要IO
    virtual void finishIO() = 0;                              // IO结束
};

#endif