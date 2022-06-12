#ifndef RESUME_H
#define RESUME_H

#include "./Global.h"
#include "./IResume.h"

//定义类Resume - 简历 - 实现IResume接口
class Resume : public IResume
{
    private:
        string name;//姓名
        int age;//年龄
        string sex;//性别
        string timeArea;//时间段
        string company;//公司

    public:
        Resume();//构造函数
        Resume(string name);//构造函数
        virtual  ~Resume();//析构函数
        void setInfo(int age,string sex);//设置信息
        void setWorkExperience(string timeArea,string company);//设置工作经历
        virtual IResume * clone();//克隆对象
        virtual void display();//显示
};

#endif