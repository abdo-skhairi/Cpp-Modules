#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string filename, std::string s1, std::string s2)
    : filename(filename), s1(s1), s2(s2)
{
}

std::string FileReplacer::readFile()
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Cannot open file\n";
        exit(1);
    }
    std::string content;
    std::string line;
    while (std::getline(file, line))
    {
        content += line;
        if (!file.eof())
            content += '\n';
    }
    file.close();
    return content;
}

void FileReplacer::writeFile(std::string content)
{
    std::ofstream file(filename + ".replace");
    if (!file.is_open())
    {
        std::cerr << "Cannot create output file\n";
        exit(1);
    }
    file << content;
    file.close();
}

std::string FileReplacer::replaceString(std::string content)
{
    std::string result;
    size_t i = 0;

    while (i < content.length())
    {
        if (content.substr(i, s1.length()) == s1)
        {
            result += s2;
            i += s1.length();
        }
        else
        {
            result += content[i];
            i++;
        }
    }
    return result;
}

void FileReplacer::replace()
{
    std::string content = readFile();
    std::string replaced = replaceString(content);
    writeFile(replaced);
}
