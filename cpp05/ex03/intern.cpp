#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::createShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (Intern::*functions[3])(std::string) = {
        &Intern::createShrubbery,
        &Intern::createRobotomy,
        &Intern::createPresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*functions[i])(target);
        }
    }

    std::cout << "Intern couldn't create form: form name doesn't exist" << std::endl;
    return NULL;
}