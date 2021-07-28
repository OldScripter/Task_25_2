#include "../include/kbd.h"

void typeIn()
{
    int input[8]{0};
    std::cout << "Please enter 8 integer numbers (line by line):\n";
    for (int i = 0; i < 8; ++i)
    {
        std::string inputBuffer;
        std::getline(std::cin, inputBuffer);
        try
        {
            int a = std::stoi(inputBuffer);
            input[i] = a;
            //ram::buff[i] = a;
        }
        catch(std::invalid_argument&)
        {
            std::cerr << "Invalid input.\n";
            break;
        }
    }
    ram::write(input);
}