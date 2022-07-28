#ifndef IIMAGE_H
#define IIMAGE_H

/**
 * @brief 抽象接收者: 抽象图形类
 *
 */
class IImage
{
public:
    virtual ~IImage() = default;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 缩放图片
     *
     * @param fltScale
     */
    virtual void scale(double fltScale) = 0;

    /**
     * @brief 纯虚函数,抽象接口
     * @brief 显示图片信息
     */
    virtual void display() = 0;
};

#endif