#include "../../include/command/ImageProcessCommand.h"

ImageProcessCommand::ImageProcessCommand(std::shared_ptr<IImage> targetImage)
{
    cout << "ImageProcessCommand()构造函数" << endl;
    this->targetImage = targetImage;
    this->currentOperation = 0;
}

ImageProcessCommand::~ImageProcessCommand()
{
    cout << "~ImageProcessCommand()析构函数" << endl;
}

void ImageProcessCommand::undo()
{
    if (this->currentOperation == 0)
    {
        return;
    }
    this->targetImage->scale(1.0 / this->operateState[currentOperation - 1]);
    this->currentOperation--;
}

void ImageProcessCommand::redo()
{
    if (this->currentOperation >= this->operateState.size())
    {
        return;
    }
    this->targetImage->scale(this->operateState[currentOperation]);
    this->currentOperation++;
}

void ImageProcessCommand::zooming(double fltScale)
{
    this->targetImage->scale(fltScale);
    this->operateState.push_back(fltScale); //保存当前状态
    this->currentOperation++;
}
