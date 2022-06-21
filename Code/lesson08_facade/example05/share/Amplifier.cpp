#include "../include/Amplifier.h"

Amplifier::Amplifier()
{
    cout << "Amplifier()构造函数" << endl;
}

Amplifier::~Amplifier()
{
    cout << "~Amplifier()析构函数" << endl;
}

void Amplifier::openAmplifier()
{
    cout << "Amplifier::openAmplifier():: 打开扩音器 ..." << endl;
}

void Amplifier::closeAmplifier()
{
    cout << "Amplifier::closeAmplifier():: 关闭扩音器 ..." << endl;
}
