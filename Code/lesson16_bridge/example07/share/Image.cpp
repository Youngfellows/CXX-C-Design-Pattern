#include "../include/Image.h"

Image::Image(std::string fileName)
{
    this->fileName = fileName;
}

std::string Image::getName()
{
    return this->fileName;
}
