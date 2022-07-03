#ifndef IDISPLAY_H
#define IDISPLAY_H

/**
 * @brief 抽象类: 显示抽象类
 *
 */
class IDisplay
{
public:
    IDisplay() = default;
    virtual ~IDisplay() = default;
    virtual void rawOpen() = 0;
    virtual void rawPrint() = 0;
    virtual void rawClose() = 0;
};

#endif