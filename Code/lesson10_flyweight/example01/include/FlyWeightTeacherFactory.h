#ifndef FLY_WEIGHT_TEACHER_FACTORY_H
#define FLY_WEIGHT_TEACHER_FACTORY_H

#include "./Teacher.h"

/**
 * @brief 完成老师结点存储
 * 
 */
class FlyWeightTeacherFactory
{
    private:
        std::map<string,Person *> *flyWeight = nullptr;//保存教师信息的集合

    public:
        FlyWeightTeacherFactory();
        ~FlyWeightTeacherFactory();
        Person * getTeacher(string id);//获取教师信息
};
#endif