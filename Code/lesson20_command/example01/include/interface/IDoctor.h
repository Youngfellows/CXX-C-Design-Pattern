#ifndef IDOCTOR_H
#define IDOCTOR_H

/**
 * @brief 抽象类: 医生抽象类
 *
 */
class IDoctor
{
public:
    virtual ~IDoctor() = default;

    /**
     * @brief 纯虚函数: 抽象接口
     * @brief 医生治疗眼科病
     *
     */
    virtual void treatEye() = 0;

    /**
     * @brief 纯虚函数: 抽象接口
     * @brief 医生治疗鼻科病
     */
    virtual void treatNose() = 0;
};

#endif