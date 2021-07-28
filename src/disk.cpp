#include "../include/disk.h"

void save()
{
    std::ofstream saveStream("data.txt", std::ios::binary);
    if (saveStream.is_open())
    {
        std::cout << " - save stream is open\n";
        for (int i = 0; i < 8; ++i)
        {
            saveStream.write((char*) &ram::buff[i], sizeof(int));
            std::cout << "\t" << ram::buff[i] <<" - saved\n";
        }
        saveStream.close();
        std::cout << " - save stream is closed\n";
    }
    else
    {
        std::cerr << "File save error.\n";
    }
}

void load()
{
    std::ifstream loadStream("data.txt", std::ios::binary);
    if (loadStream.is_open())
    {
        std::cout << " - load stream is open\n";
        for (int i = 0; i < 8 && !loadStream.eof(); ++i)
        {
            loadStream.read((char*) &ram::buff[i], sizeof (int));
            std::cout << "\t" << ram::buff[i] <<" - loaded\n";
        }
        loadStream.close();
        std::cout << " - load stream is closed\n";
    }
    else
    {
        std::cerr << "File load error.\n";
    }
}