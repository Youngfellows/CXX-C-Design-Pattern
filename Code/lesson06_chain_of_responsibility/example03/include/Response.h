#ifndef RESPONSE_H
#define RESPONSE_H

#include "./Global.h"

/**
 * @brief 响应
 * 
 */
class Response
{
    private:
        string text;

    public:
        Response();
        Response(string text);
        ~Response();
        string response();
};
#endif