#include "../include/FlyWeightTeacherFactory.h"

FlyWeightTeacherFactory::FlyWeightTeacherFactory()
{
    cout << "FlyWeightTeacherFactory()构造函数" << endl;
    this->flyWeight = new std::map<string,Person *>();
}

FlyWeightTeacherFactory::~FlyWeightTeacherFactory()
{
    cout << "~FlyWeightTeacherFactory()析构函数" << endl;
    //释放内存
    while(!(this->flyWeight->empty()))
    {
        map<string,Person *>::iterator iter = this->flyWeight->begin();
        Person *person = iter->second;
        //把第一个结点从容器中删除
        this->flyWeight->erase(iter);
        delete person;
    }

}

Person * FlyWeightTeacherFactory::getTeacher(string id)
{
    Person *person = nullptr;
    map<string,Person *>::iterator iter = this->flyWeight->find(id);//根据id查找元素
    if(iter == this->flyWeight->end())
    {   
        string name;
        int age;
        //没有找到元素,添加元素
        cout << "请输入ID为" << id << "老师的姓名:" ;
        cin >> name;
        cout << "请输入ID为" << id << "老师的年龄:" ;
        cin >> age;
        person = new Teacher(name,age,id);
        this->flyWeight->insert(pair<string,Person *>(id,person));
    }else
    {
        person = iter->second;//获取元素
    }
    return person;
}