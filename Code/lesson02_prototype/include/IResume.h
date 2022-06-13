#ifndef IRESUME_H
#define IRESUME_H

//定义接口类 IResume - 简历
class IResume
{
    public:
        virtual IResume * clone() = 0;//虚函数 - 接口 - 克隆对象
        virtual void display() = 0;//虚函数 - 接口 - 显示
        //virtual ~IResume() = 0;
};

#endif