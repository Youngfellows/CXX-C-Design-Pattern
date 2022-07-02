#include "../../include/builder/FatBuilder.h"

FatBuilder::FatBuilder()
{
    this->pen = std::make_shared<Pen>("派克", 26);
    this->canvas = std::make_shared<Canvas>(2.5, 3.0);
    this->person = std::make_shared<FatPerson>("猪八戒");
}

FatBuilder::~FatBuilder()
{
    cout << "~FatBuilder()析构函数" << endl;
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

void FatBuilder::useTool()
{
    cout << "FatBuilder::useTool():: 使用工具 ..." << endl;
    this->pen->use();    //使用画笔
    this->canvas->use(); //使用画布
}

void FatBuilder::createHead()
{
    // cout << "FatBuilder::createHead():: ..." << endl;
    this->person->drawHead(); //创建头
}

void FatBuilder::createHand()
{
    this->person->drawHand(); //创建手
}

void FatBuilder::createBody()
{
    this->person->drawBody(); //创建身体
}

void FatBuilder::createFoot()
{
    this->person->drawFoot(); //创建脚
}

std::shared_ptr<Person> FatBuilder::getPerson()
{
    return this->person;
}