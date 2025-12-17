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

    std::string readFile();
    void writeFile(const std::string& content);
    std::string replaceString(const std::string& content);

public:
    FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
    void replace();
};

#endif
