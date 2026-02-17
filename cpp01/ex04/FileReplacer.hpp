#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <fstream>
#include <iostream>

class FileReplacer
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        FileReplacer(std::string filename, std::string s1, std::string s2);
        void replace();
        std::string readFile();
        void writeFile(std::string content);
        std::string replaceString(std::string content);
    };

#endif
