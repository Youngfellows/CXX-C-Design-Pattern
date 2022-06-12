#include "../include/Resume.h"

Resume::Resume()//构造函数
{
    cout << "Resume()无参数构造函数" << endl;
}

Resume::Resume(string name)//构造函数
{
    cout << "Resume()有参数构造函数" << endl;
    this->name = name;
}

Resume::~Resume()//析构函数
{
    cout << "~Resume()析构函数" << endl;
}

void Resume::setInfo(int age,string sex)//设置信息
{
    cout << "setInfo():: ..." << endl;
    this->age = age;
    this->sex = sex;
}

void Resume::setWorkExperience(string timeArea,string company)//设置工作经历
{
    cout << "setWorkExperience():: ..." << endl;
    this->timeArea = timeArea;
    this->company = company;
}

IResume * Resume::clone()//克隆对象
{
    cout << "setWorkExperience():: ..." << endl;
    //创建对象,动态申请内存
    Resume *resume = new Resume(this->name);
    resume->setInfo(this->age,this->sex);
    resume->setWorkExperience(this->timeArea,this->company);
    return resume;
}

void Resume::display()//显示
{
    cout << "display():: ..." << endl;
    cout << "姓名:" << this->name << endl;
    cout << "年龄:" << this->age << endl;
    cout << "性别:" << this->sex << endl;
    cout << "时间段:" << this->timeArea << endl;
    cout << "公司:" << this->company << endl;
    cout << endl;
}