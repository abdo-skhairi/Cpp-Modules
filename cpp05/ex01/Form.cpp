#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low";
}

Form::Form() : name("Default"), gradeToSign(75), gradeToExecute(75), isSigned(true)
{
    std::cout << "Defaut constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Param constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Form::getName() {return name;}
bool        Form::getisSigned() { return isSigned;}
const int   Form::getGradeToSign(){return gradeToSign;}
const int Form::getGradeToExecute() {return gradeToExecute;}

