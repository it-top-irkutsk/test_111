#include "calculate.h"

int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}

int Mul(int x, int y)
{
    return x * y;
}

int Div(int x, int y)
{
    /*
    if (y == 0) {
        return 0;
    } else {
        return x / y;
    }
    */
    return y == 0 ? 0 : x / y;
}

