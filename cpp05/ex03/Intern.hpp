#ifndef INTERN_HPP
#define INTERN_HPP

// #include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        ~Intern();

        AForm* makeForm(std::string name, std::string target);

    private:
        AForm* createShrubbery(std::string target);
        AForm* createRobotomy(std::string target);
        AForm* createPresidential(std::string target);
};

#endif