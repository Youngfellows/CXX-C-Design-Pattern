#include "../include/Light.h"

Light::Light()
{
    cout << "Light()构造函数" << endl;
}

Light::~Light()
{
    cout << "~Light()析构函数" << endl;
}

void Light::turnOnLight()
{
    cout << "Light::turnOnLight():: 打开灯光 ..." << endl;
}

void Light::turnOffLight()
{
    cout << "Light::turnOffLight():: 关闭灯光 ..." << endl;
}
