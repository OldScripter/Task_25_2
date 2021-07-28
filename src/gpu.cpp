#include "../include/gpu.h"

void print()
{
    for (int i = 0; i < 8; ++i)
    {
        std::cout << ram::read()[i] << " ";
    }
    std::cout << "\n";
}