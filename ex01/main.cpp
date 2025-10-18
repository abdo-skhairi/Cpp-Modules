#include "Phonebook.hpp"
#include "Contact.hpp"

int ft_cmp(std::string str1, std::string str2)
{
    int i = 0;
    int j = 0;
    while(std::isspace(str1[i]))
        i++;
    while(str1[i] && str2[j])
    {
        if(str1[i] != str2[j])
            return(1);
        i++;
        j++;
    }
    if(str1[i] != str2[j])
        return(1);
    while(std::isspace(str1[i]))
        i++;
    if(str1[i])
        return(1);
    return(0);
}


// void setFields(Contact c)
// {
//     // c.display_contact;
// }

void isplayFull()
{
    
}

int main()
{
    Contact c;
    // setFields(c);
    c.set_values();
    c.display_contact();
    std::string input;
    while(true)
    {
        std::cout << "Choose from the options [ADD] [SEARCH] [EXIT] : ";
        std::getline(std::cin, input);
        std::cout << input.substr(0, 3) + ".";
        if(ft_cmp(input, "EXIT") == 0)
            return(0);
        else
            continue;
    }
}
