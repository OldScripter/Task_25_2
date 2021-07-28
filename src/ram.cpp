#include "../include/ram.h"

int ram::buff[8]{0};

int* ram::read()
{
    return ram::buff;
}

void ram::write(const int* input)
{
    for (int i = 0; i < 8; ++i)
    {
        ram::buff[i] = input[i];
    }
}