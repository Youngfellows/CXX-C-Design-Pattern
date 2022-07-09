#include "../../include/expression/Scale.h"

void Scale::excute(std::string key, double value)
{
    switch ((int)value)
    {
    case 1:
        std::cout << "bass " << std::endl;
        break;
    case 2:
        std::cout << "alto " << std::endl;
        break;
    case 3:
        std::cout << "treble " << std::endl;
        break;
    default:
        break;
    }
}