#ifndef IMAGE_H
#define IMAGE_H

#include "./Global.h"

/**
 * @brief 实体类: 图片
 *
 */
class Image
{
private:
    std::string fileName; //图片名称

public:
    Image() = default;
    Image(std::string fileName);
    ~Image() = default;
    std::string getName();
};
#endif