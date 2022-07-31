#ifndef OPERATION_H
#define OPERATION_H

namespace state
{
    typedef enum
    {
        RESUME = 0,
        TIMEOUT,
        NEEDIO,
        FINISHIO
    } Operation;
}

#endif