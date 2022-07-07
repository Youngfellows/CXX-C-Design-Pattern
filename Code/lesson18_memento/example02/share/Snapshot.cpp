#include "../include/Snapshot.h"

Snapshot::Snapshot(std::string text, int x, int y, double width)
{
    cout << "Snapshot()构造函数" << endl;
    this->text = text;
    this->x = x;
    this->y = y;
    this->selectionWidth = width;
}

Snapshot::~Snapshot()
{
    cout << "~Snapshot()析构函数" << endl;
}

std::string Snapshot::getText()
{
    return this->text;
}

double Snapshot::getCurX()
{
    return this->x;
}

double Snapshot::getCurY()
{
    return this->y;
}

double Snapshot::getSelectionWidth()
{
    return this->selectionWidth;
}