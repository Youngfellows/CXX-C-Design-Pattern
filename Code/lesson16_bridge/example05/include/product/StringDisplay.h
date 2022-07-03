#ifndef STRING_DISPLAY_H
#define STRING_DISPLAY_H

#include "../Global.h"
#include "../IDisplay.h"

/**
 * @brief 派生类: 显示字符
 *
 */
class StringDisplay : public IDisplay
{
private:
    std::string text;

public:
    StringDisplay() = default;
    StringDisplay(std::string text);
    ~StringDisplay() = default;
    virtual void rawOpen() override;
    virtual void rawPrint() override;
    virtual void rawClose() override;

private:
    void printLine();
};
#endif