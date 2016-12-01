#include <fstream>
#include <random>
#include <iostream>


int main(int argc, char*argv[])
{
    std::ofstream output_file("data.h");

    output_file << "#ifndef __DATA_H__" << std::endl;
    output_file << "#define __DATA_H__" << std::endl;
    output_file << std::endl;
    output_file << "const int table [] = {" << std::endl;

    // generate randam table.
    std::random_device random_device;
    std::uniform_int_distribution<int> dist(0,4096);

    for (int i = 0; i < (1024 * 1024) / 32; i++)
    {
        output_file << "    ";
        for (int j = 0; j < 32; j++)
        {
            output_file << dist(random_device) << ", ";
        }
        output_file << std::endl;
    }

    output_file << "};" << std::endl;
    output_file << std::endl;
    output_file << "#endif //__DATA_H__" << std::endl;

    output_file.close();
}

