#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b4("Diana", 2);
        b4.incrementGrade();
        std::cout << b4 << std::endl;
        try 
        {
             b4.incrementGrade(); 
        }
        catch (std::exception &e) 
        {
             std::cout << e.what() << std::endl; 
        }
        Bureaucrat b5("Edward", 149);
        b5.decrementGrade();
        std::cout << b5 << std::endl;
        try 
        {
            b5.decrementGrade();
        }
        catch (std::exception &e) 
        {
            std::cout << e.what() << std::endl;
        }
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
