#ifndef HANDSET_SOFT_H
#define HANDSET_SOFT_H

/**
 * @brief 抽象类: 手机软件抽象类
 *
 */
class HandsetSoft
{
    
public:
    virtual ~HandsetSoft() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 手机软件运行
     *
     */
    virtual void run() = 0;
};

#endif