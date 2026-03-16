#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    Bureaucrat boss("Boss", 1);
    Bureaucrat worker("Worker", 140);
    Intern intern;

    AForm* forms[] = {
        intern.makeForm("shrubbery creation", "home"),
        intern.makeForm("robotomy request", "Bender"),
        intern.makeForm("presidential pardon", "Arthur"),
        intern.makeForm("coffee request", "Someone") //invalid formaaaaa wa3333333
    };
    for (int i = 0; i < 4; i++)
    {
        if (forms[i])
        {
            if (forms[i]->getSignGrade() <= worker.getGrade())
                worker.signForm(*forms[i]);
            else
                boss.signForm(*forms[i]);

            if (forms[i]->getExecGrade() <= worker.getGrade())
                worker.executeForm(*forms[i]);
            else
                boss.executeForm(*forms[i]);
            delete forms[i];
        }
    }
    return 0;
}
