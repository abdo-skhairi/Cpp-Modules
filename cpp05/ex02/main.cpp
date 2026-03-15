#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat boss("Boss", 1);
	Bureaucrat worker("Worker", 140);

	ShrubberyCreationForm shrub("home");
	RobotomyRequestForm robot("Bender");
	PresidentialPardonForm pardon("Arthur");

	worker.signForm(shrub);
	worker.executeForm(shrub);

	boss.signForm(robot);
	boss.executeForm(robot);

	boss.signForm(pardon);
	boss.executeForm(pardon);
}