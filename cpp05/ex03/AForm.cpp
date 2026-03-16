#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int signGrade, int execGrade)
	: name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
	: name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade) {}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->isSigned = other.isSigned;
	return *this;
}

AForm::~AForm() {}

const std::string &AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getSignGrade() const
{
	return signGrade;
}

int AForm::getExecGrade() const
{
	return execGrade;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "form not signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
	out << "Form " << f.getName()
		<< ", sign grade " << f.getSignGrade()
		<< ", exec grade " << f.getExecGrade()
		<< ", signed: " << f.getIsSigned();
	return out;
}
