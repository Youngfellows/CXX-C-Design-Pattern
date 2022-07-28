#ifndef IMAGE_PROCESS_COMMAND_H
#define IMAGE_PROCESS_COMMAND_H

#include "../Global.h"
#include "../interface/ICommand.h"
#include "../interface/IImage.h"

/**
 * @brief 派生类: 图片处理命令
 *
 */
class ImageProcessCommand : public ICommand
{
private:
    std::shared_ptr<IImage> targetImage = nullptr; //接收者,图片
    std::vector<float> operateState;               //操作状态
    unsigned int currentOperation = 0;             //当前的操作

public:
    ImageProcessCommand(std::shared_ptr<IImage> targetImage);
    ~ImageProcessCommand();
    virtual void undo() override;                   //实现undo()函数
    virtual void redo() override;                   //实现redo()函数
    virtual void zooming(double fltScale) override; //实现zooming()函数
};
#endif