#include "../../include/builder/ThinBuilder.h"

ThinBuilder::ThinBuilder()
{
    this->pen = std::make_shared<Pen>("万宝龙", 14.5);
    this->canvas = std::make_shared<Canvas>(1.5, 2.0);
    this->person = std::make_shared<ThinPerson>("杨过");
}

ThinBuilder::~ThinBuilder()
{
    cout << "~ThinBuilder()析构函数" << endl;
    if (this->pen != nullptr)
    {
        this->pen = nullptr;
    }
    if (this->canvas != nullptr)
    {
        this->canvas = nullptr;
    }
    if (this->person != nullptr)
    {
        this->person = nullptr;
    }
}

void ThinBuilder::useTool()
{
    cout << "ThinBuilder::useTool():: 使用工具 ..." << endl;
    this->pen->use();    //使用画笔
    this->canvas->use(); //使用画布
}

void ThinBuilder::createHead()
{
    // cout << "ThinBuilder::createHead():: ..." << endl;
    this->person->drawHead(); //创建头
}

void ThinBuilder::createHand()
{
    this->person->drawHand(); //创建手
}

void ThinBuilder::createBody()
{
    this->person->drawBody(); //创建身体
}

void ThinBuilder::createFoot()
{
    this->person->drawFoot(); //创建脚
}

std::shared_ptr<Person> ThinBuilder::getPerson()
{
    return this->person;
}