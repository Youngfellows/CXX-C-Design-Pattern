#include "../include/Banner.h"

// Banner::Banner()
// {
//     cout << "Banner()无参数构造函数" << endl;  
// }

Banner::Banner(string content)
{
    cout << "Banner()有参数构造函数" << endl;
    this->content = content;
}