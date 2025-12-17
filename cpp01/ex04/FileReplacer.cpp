#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2)
{
}

std::string FileReplacer::readFile()
{
    std::ifstream file(filename);
    if (!file.is_open())
        throw std::runtime_error("Cannot open file");

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

void FileReplacer::writeFile(const std::string& content)
{
    std::ofstream file(filename + ".replace");
    if (!file.is_open())
        throw std::runtime_error("Cannot create output file");

    file << content;
    file.close();
}

std::string FileReplacer::replaceString(const std::string& content)
{
    std::string result = content;
    size_t pos = 0;
    while ((pos = result.find(s1, pos)) != std::string::npos)
    {
        result.erase(pos, s1.length());
        result.insert(pos, s2);
        pos += s2.length();
    }
    return result;
}

void FileReplacer::replace()
{
    std::string content = readFile();
    std::string replaced = replaceString(content);
    writeFile(replaced);
}
