#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
    std::cout << "[ DEBUG ]\n I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n I really do!\n" << std::endl;
}

void Harl::info() 
{
    std::cout << "[ INFO ]\n I cannot believe adding extra bacon costs more money.\n You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning() 
{
    std::cout << "[ WARNING ]\n I think I deserve to have some extra bacon for free.\n I’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error() 
{
    std::cout << "[ ERROR ]\n This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::filter(std::string level) 
{
    int lvl = -1;

    if (level == "DEBUG")
        lvl = 0;
    else if (level == "INFO")
        lvl = 1;
    else if (level == "WARNING")
        lvl = 2;
    else if (level == "ERROR")
        lvl = 3;
    switch (lvl)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
