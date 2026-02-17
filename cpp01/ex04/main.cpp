#include "FileReplacer.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./ex04 filename s1 s2" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "s1 cannot be empty" << std::endl;
        return 1;
    }
    try
    {
        FileReplacer replacer(filename, s1, s2);
        replacer.replace();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
