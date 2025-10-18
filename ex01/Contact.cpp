#include "Contact.hpp"
#include "Phonebook.hpp"

void Contact::set_values()
{
    std::cout << "Enter first name : ";
    std::getline(std::cin, First_name);
    std::cout << "Enter last name: ";
    std::getline(std::cin, Last_name);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, Nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, Phone_number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, Dark_secret);
}

void Contact::display_contact()
{
    std::cout << "first name " << First_name << "\n";
    std::cout << "Last_name " << Last_name << "\n";
    std::cout << "Nickname " << Nickname << "\n";
    std::cout << "Phone_number " << Phone_number << "\n";
    std::cout << "Dark_secret " << Dark_secret << "\n";
}

void Contact::display_in_small_format()
{
    
}
