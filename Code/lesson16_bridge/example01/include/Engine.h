#ifndef ENGINE_H
#define ENGINE_H

/**
 * @brief 抽象类: 抽象安装发动机类
 *
 */
class Engine
{
public:
    virtual ~Engine() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 安装xx型号发动机
     *
     */
    virtual void installEngine() = 0;
};

#endif