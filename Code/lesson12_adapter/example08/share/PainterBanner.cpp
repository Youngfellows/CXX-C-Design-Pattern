#include "../include/PainterBanner.h"

PainterBanner::PainterBanner(std::unique_ptr<Banner> banner)
{
    this->banner = std::move(banner);
}

PainterBanner::~PainterBanner()
{
    if(this->banner != nullptr)
    {
        this->banner = nullptr;
    }
}

void PainterBanner::printStrong()
{
    cout << "PainterBanner::printStrong():: 使用适配器,使Banner也能适配printStrong()接口 ..." << endl;
    this->banner->showWithParen();
}

void PainterBanner::printWeak()
{
    cout << "PainterBanner::printStrong():: 使用适配器,使Banner也能适配printWeak()接口 ..." << endl;
    this->banner->showWithStar();
}