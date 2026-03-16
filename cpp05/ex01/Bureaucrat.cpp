#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("Default"), grade(75)
{
    std::cout << "Defaut constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

void Bureaucrat::incrementGrade()
{
    if (grade == 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade == 150)
        throw GradeTooLowException();
    grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat created"<< std::endl;
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

std::string Bureaucrat::getName() const { return (name);}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{ return "Bureaucrat grade too high";}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{ return "Bureaucrat grade too low"; }

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}

void Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << name << " signed " << f.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << name << " couldn't sign " << f.getName()
                  << " because " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
: name(b.name), grade(b.grade)
{
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    if(this != &b)
    {
        std::cout << "Assignment operator called" << std::endl;
        this->grade = b.grade;
    }
    return *this;
}
