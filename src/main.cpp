#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "kbd.h"
#include "gpu.h"

int main() {

    do
    {
        std::cout << "Please enter the command:\n";
        std::string cmd;
        std::getline(std::cin, cmd);
        if (cmd == "exit")
        {
            break;
        }
        else if (cmd == "sum")
        {
            std::cout << compute() << "\n";
        }
        else if (cmd == "save")
        {
            save();
        }
        else if (cmd == "load")
        {
            load();
        }
        else if (cmd == "input")
        {
            typeIn();
        }
        else if (cmd == "display")
        {
            print();
        }
    } while (true);

    std::cout << "Program is finished.\n";

    return 0;
}