#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low";
}

Form::Form()
: name("Default"), isSigned(false), gradeToSign(75), gradeToExecute(75)
{
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(const Form &f)
    : name(f.name), isSigned(f.isSigned),
      gradeToSign(f.gradeToSign), gradeToExecute(f.gradeToExecute)
{
    std::cout << "Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &f)
{
    if (this != &f)
        this->isSigned = f.isSigned;
    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if(gradeToSign < 1)
        throw GradeTooHighException();
    else if(gradeToSign > 150)
        throw GradeTooLowException();
    if(gradeToExecute < 1)
        throw GradeTooHighException();
    else if(gradeToExecute > 150)
        throw GradeTooLowException();
    std::cout << "Form created"<< std::endl;
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

void Form::beSigned(const Bureaucrat& b)
{
    if(b.getGrade() <= gradeToSign)
    {
        isSigned = true;
    }
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
    std::string s;

    if(f.getIsSigned())
        s = "yes";
    else
        s = "no";
    out << "Form " << f.getName();
    out << ", sign grade " << f.getGradeToSign();
    out << ", execute grade " << f.getGradeToExecute();
    out << ", signed: " << s;
    return out;
}

std::string Form::getName() const {return name;}
bool        Form::getIsSigned() const { return isSigned;}
int         Form::getGradeToSign() const {return gradeToSign;}
int         Form::getGradeToExecute() const  {return gradeToExecute;}
