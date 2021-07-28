#include "../include/cpu.h"

int compute()
{
    int computeResult = 0;
    for (int i = 0; i < 8; ++i)
    {
        computeResult += ram::buff[i];
    }
    return computeResult;
}