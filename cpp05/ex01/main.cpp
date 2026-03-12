#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat alice("Alice", 1);
        Bureaucrat bob("Bob", 50);

        Form secret("TopSecret", 1, 30);
        Form normal("Routine", 50, 75);

        alice.signForm(secret);
        bob.signForm(secret);

        bob.signForm(normal);
        alice.signForm(normal);

        std::cout << secret << std::endl;
        std::cout << normal << std::endl;

        Form copyForm(secret);
        Form assignForm("Temp", 75, 75);
        assignForm = normal;

        Bureaucrat copyBureau(alice);
        Bureaucrat assignBureau("Temp", 100);
        assignBureau = bob;

        std::cout << copyForm << std::endl;
        std::cout << assignForm << std::endl;
        std::cout << copyBureau << std::endl;
        std::cout << assignBureau << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}